#pragma once

namespace PetBoadingManagementSystem {

	using namespace System;

	public ref class Animal abstract
	{
	private:

		int     petId;
		int     ownerId;
		String^ petName;
		String^ ownerName;
		String^ contactNo;
		int     daysBoarded;

	public:
		Animal(String^ pet, String^ owner, String^ contact, int days)
		{
			this->petId = 0;
			this->ownerId = 0;
			this->PetName = pet;
			this->OwnerName = owner;
			this->ContactNo = contact;
			this->DaysBoarded = days;
		}

		property int PetId {
			int get() { return petId; }
			void set(int value) { petId = value; }
		}

		property int OwnerId {
			int get() { return ownerId; }
			void set(int value) { ownerId = value; }
		}

		property String^ PetName {
			String^ get() { return petName; }
			void set(String^ value)
			{
				if (String::IsNullOrWhiteSpace(value))
					throw gcnew ArgumentException("Pet name cannot be empty.");
				petName = value->Trim();
			}
		}

		property String^ OwnerName {
			String^ get() { return ownerName; }
			void set(String^ value)
			{
				if (String::IsNullOrWhiteSpace(value))
					throw gcnew ArgumentException("Owner name cannot be empty.");
				ownerName = value->Trim();
			}
		}

		property String^ ContactNo {
			String^ get() { return contactNo; }
			void set(String^ value)
			{
				if (value == nullptr || !System::Text::RegularExpressions::Regex::IsMatch(value, "^[0-9]{10}$"))
					throw gcnew ArgumentException("Contact number must contain exactly 10 digits.");
				contactNo = value;
			}
		}

		property int DaysBoarded {
			int get() { return daysBoarded; }
			void set(int value)
			{
				if (value < 1 || value > 365)
					throw gcnew ArgumentException("Days boarded must be between 1 and 365.");
				daysBoarded = value;
			}
		}

		virtual double  GetDailyRate() abstract;
		virtual String^ GetAnimalType() abstract;

		double CalculateBill()
		{
			return GetDailyRate() * daysBoarded;
		}

		virtual String^ ToString() override
		{
			double bill = CalculateBill();
			return petName + " (" + GetAnimalType() + ")  |  Owner: " + ownerName +
				"  |  Days: " + daysBoarded.ToString() + "  |  Bill: Rs. " + bill.ToString("N2");
		}
	};

	public ref class Dog : public Animal
	{
	public:
		Dog(String^ pet, String^ owner, String^ contact, int days)
			: Animal(pet, owner, contact, days) {
		}

		virtual double  GetDailyRate() override { return 2500.0; }
		virtual String^ GetAnimalType() override { return "Dog"; }
	};

	public ref class Cat : public Animal
	{
	public:
		Cat(String^ pet, String^ owner, String^ contact, int days)
			: Animal(pet, owner, contact, days) {
		}

		virtual double  GetDailyRate() override { return 1500.0; }
		virtual String^ GetAnimalType() override { return "Cat"; }
	};

	public ref class Rabbit : public Animal
	{
	public:
		Rabbit(String^ pet, String^ owner, String^ contact, int days)
			: Animal(pet, owner, contact, days) {
		}

		virtual double  GetDailyRate() override { return 1200.0; }
		virtual String^ GetAnimalType() override { return "Rabbit"; }
	};

	public ref class Parrot : public Animal
	{
	public:
		Parrot(String^ pet, String^ owner, String^ contact, int days)
			: Animal(pet, owner, contact, days) {
		}

		virtual double  GetDailyRate() override { return 1000.0; }
		virtual String^ GetAnimalType() override { return "Parrot"; }
	};


	public ref class AnimalFactory abstract sealed
	{
	public:
		static Animal^ Create(String^ type, String^ pet, String^ owner, String^ contact, int days)
		{
			if (type == "Dog")    return gcnew Dog(pet, owner, contact, days);
			if (type == "Cat")    return gcnew Cat(pet, owner, contact, days);
			if (type == "Rabbit") return gcnew Rabbit(pet, owner, contact, days);
			if (type == "Parrot") return gcnew Parrot(pet, owner, contact, days);
			throw gcnew ArgumentException("Please select an animal type.");
		}
	};
}
