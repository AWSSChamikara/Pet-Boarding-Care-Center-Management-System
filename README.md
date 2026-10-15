# Pet Boarding Care Center Management System

ICT 1306 - Object Oriented Programming
Group Assignment
Department of Computing
Rajarata University of Sri Lanka

A Windows desktop application (C++/CLI, Windows Forms) with a MySQL database for managing animals boarded at a pet care center.

## Team Syntax Errors

|    Reg No    |        Name       |  Index No  |
|--------------|-------------------|------------|
| ICT/2024/020 | AWSS Chamikara    |    6634    |
| ICT/2024/034 | PKAS Duljan       |    6647    |
| ICT/2024/066 | LVRK Karunarathne |    6677    |
| ICT/2024/067 | UPR Karunathilake |    6678    |
| ICT/2024/081 | RDS Madhuranga    |    6687    |

Demo video (YouTube): https://youtu.be/ZFIaEpMiXAM

## Scenario

A pet boarding care center takes in animals for a number of days. Admin register each animal with its owner's details, view everything currently at the center with the amount due, correct details when needed, and hand animals back to their owners when they are collected. The fee depends on the type of animal.

## Features

| Screen         | What it does                                                             | Database operation |
|----------------|--------------------------------------------------------------------------|--------------------|
| Login          | Admin sign-in (`admin` / `1234`)                                         | -                  |
| Board A Pet    | Register pet name, owner name, animal type, days boarded, contact number | Create             |
| View Details   | ListBox of all pets with owner, days boarded and total bill              | Read               |
| Update Details | Select a pet and edit its details                                        | Update             |
| Reclaim A Pet  | Show the bill, confirm, and remove the pet from the center               | Delete             |

## Fee calculation

| Animal | Rate per day |
|--------|--------------|
| Dog    | Rs. 2500     |
| Cat    | Rs. 1500     |
| Rabbit | Rs. 1200     |
| Parrot | Rs. 1000     |

Bill = rate per day x days boarded. The rates are defined in `Animal.h`.

## OOP concepts used

|    Concept    | Where in the code                                                                                                     |
|---------------|-----------------------------------------------------------------------------------------------------------------------|
| Class         | `Animal`, `Dog`, `Cat`, `Rabbit`, `Parrot`, `AnimalFactory`, and the MySQL helper class in `Database_Link.h`          |
| Object        | Forms create objects such as `gcnew Dog(...)` through `AnimalFactory::Create(...)`                                    |
| Encapsulation | `Animal` keeps its fields private and exposes them through validating properties (e.g. days boarded must be 3 digits) |
| Abstraction   | `Animal` is abstract; `GetDailyRate()` and `GetAnimalType()` are abstract methods                                     |
| Inheritance   | `Dog`, `Cat`, `Rabbit` and `Parrot` inherit from `Animal`                                                             |
| Polymorphism  | `CalculateBill()` calls `GetDailyRate()`, which each subclass overrides; `ToString()` is overridden so the List       |
|               | displays each pet                                                                                                     |

## Database

MySQL with two record types, `owners` and `pets` (each pet belongs to one owner). The schema is in `pbms_db.sql`.

## Technologies

- Visual Studio, C++/CLI Windows Forms (.NET Framework)
- MySQL Server and MySQL Workbench
- MySQL Connector/NET (`MySql.Data.dll`)
- Visual Studio Installer Projects

## How to run

-> Method 1

    1. Install **MySQL Server** and **MySQL Connector/NET**.
    2. Open `pbms_db.sql` in MySQL Workbench and execute it to create the `pbms_db` database and tables.
    3. Open the solution explore in Visual Studio. If the `MySql.Data` reference shows a warning, remove it and re-add it:
    right-click the project, then Add, then Reference, and browse to `MySql.Data.dll` in the Connector/NET `Assemblies` folder
    (common location:- C:\Program Files (x86)\MySQL\MySQL Connector NET 26.7\MySql.Data.dll).
    4. Open `Database_Link.h` and set `Uid` and `Pwd` in the connection string to your own MySQL username and password.
    5. Build and run, then sign in with Username:- `admin` / Password:- `1234`.

    *If the app reports a missing DLL when it starts, copy all the DLLs from the Connector/NET `Assemblies` folder next to the built `.exe`.

-> Method 2

    1. Install the application using setup.exe or PBMS Setup.msi in Release. For installation follow the instructions in Readme file in Release.
