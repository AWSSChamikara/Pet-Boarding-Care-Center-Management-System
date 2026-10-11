#pragma once
#include "Animal.h"

namespace PetBoadingManagementSystem {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace MySql::Data::MySqlClient;

	public ref class DatabaseHelper abstract sealed
	{
	private:
		static String^ ConnectionString()
		{
			return "Server=localhost;Port=3306;Database=pbms_db;Uid=root;Pwd=your_password;";
		}

		static int GetOrCreateOwner(MySqlConnection^ conn, String^ ownerName, String^ contactNo)
		{
			MySqlCommand^ find = gcnew MySqlCommand(
				"SELECT owner_id FROM owners WHERE owner_name = @name AND contact_no = @contact LIMIT 1", conn);
			find->Parameters->AddWithValue("@name", ownerName);
			find->Parameters->AddWithValue("@contact", contactNo);
			Object^ existing = find->ExecuteScalar();
			if (existing != nullptr)
				return Convert::ToInt32(existing);

			MySqlCommand^ insert = gcnew MySqlCommand(
				"INSERT INTO owners (owner_name, contact_no) VALUES (@name, @contact)", conn);
			insert->Parameters->AddWithValue("@name", ownerName);
			insert->Parameters->AddWithValue("@contact", contactNo);
			insert->ExecuteNonQuery();
			return static_cast<int>(insert->LastInsertedId);
		}

	public:
		// CREATE
		static void AddAnimal(Animal^ pet)
		{
			MySqlConnection conn(ConnectionString());
			conn.Open();

			int ownerId = GetOrCreateOwner(% conn, pet->OwnerName, pet->ContactNo);

			MySqlCommand^ cmd = gcnew MySqlCommand(
				"INSERT INTO pets (pet_name, animal_type, days_boarded, owner_id) "
				"VALUES (@pet, @type, @days, @owner)", % conn);
			cmd->Parameters->AddWithValue("@pet", pet->PetName);
			cmd->Parameters->AddWithValue("@type", pet->GetAnimalType());
			cmd->Parameters->AddWithValue("@days", pet->DaysBoarded);
			cmd->Parameters->AddWithValue("@owner", ownerId);
			cmd->ExecuteNonQuery();

			pet->OwnerId = ownerId;
			pet->PetId = static_cast<int>(cmd->LastInsertedId);
		}

		// READ
		static List<Animal^>^ GetAllAnimals()
		{
			List<Animal^>^ result = gcnew List<Animal^>();

			MySqlConnection conn(ConnectionString());
			conn.Open();

			MySqlCommand^ cmd = gcnew MySqlCommand(
				"SELECT p.pet_id, p.pet_name, p.animal_type, p.days_boarded, "
				"o.owner_id, o.owner_name, o.contact_no "
				"FROM pets p INNER JOIN owners o ON p.owner_id = o.owner_id "
				"ORDER BY p.pet_id", % conn);

			MySqlDataReader^ reader = cmd->ExecuteReader();
			while (reader->Read())
			{
				Animal^ pet = AnimalFactory::Create(
					reader->GetString(2),      // animal_type
					reader->GetString(1),      // pet_name
					reader->GetString(5),      // owner_name
					reader->GetString(6),      // contact_no
					reader->GetInt32(3));      // days_boarded
				pet->PetId = reader->GetInt32(0);
				pet->OwnerId = reader->GetInt32(4);
				result->Add(pet);
			}
			reader->Close();
			return result;
		}

		// UPDATE
		static void UpdateAnimal(Animal^ pet)
		{
			MySqlConnection conn(ConnectionString());
			conn.Open();

			MySqlCommand^ cmdOwner = gcnew MySqlCommand(
				"UPDATE owners SET owner_name = @name, contact_no = @contact WHERE owner_id = @id", % conn);
			cmdOwner->Parameters->AddWithValue("@name", pet->OwnerName);
			cmdOwner->Parameters->AddWithValue("@contact", pet->ContactNo);
			cmdOwner->Parameters->AddWithValue("@id", pet->OwnerId);
			cmdOwner->ExecuteNonQuery();

			MySqlCommand^ cmdPet = gcnew MySqlCommand(
				"UPDATE pets SET pet_name = @pet, animal_type = @type, days_boarded = @days WHERE pet_id = @id", % conn);
			cmdPet->Parameters->AddWithValue("@pet", pet->PetName);
			cmdPet->Parameters->AddWithValue("@type", pet->GetAnimalType());
			cmdPet->Parameters->AddWithValue("@days", pet->DaysBoarded);
			cmdPet->Parameters->AddWithValue("@id", pet->PetId);
			cmdPet->ExecuteNonQuery();
		}

		// DELETE
		static void DeleteAnimal(int petId)
		{
			MySqlConnection conn(ConnectionString());
			conn.Open();

			MySqlCommand^ delPet = gcnew MySqlCommand("DELETE FROM pets WHERE pet_id = @id", % conn);
			delPet->Parameters->AddWithValue("@id", petId);
			delPet->ExecuteNonQuery();

			MySqlCommand^ delOwners = gcnew MySqlCommand(
				"DELETE FROM owners WHERE owner_id NOT IN (SELECT owner_id FROM pets)", % conn);
			delOwners->ExecuteNonQuery();
		}
	};
}
