CREATE DATABASE IF NOT EXISTS pbms_db;
USE pbms_db;

CREATE TABLE IF NOT EXISTS owners (
    owner_id    INT AUTO_INCREMENT PRIMARY KEY,
    owner_name  VARCHAR(50) NOT NULL,
    contact_no  VARCHAR(10) NOT NULL
) ENGINE=InnoDB;

CREATE TABLE IF NOT EXISTS pets (
    pet_id        INT AUTO_INCREMENT PRIMARY KEY,
    pet_name      VARCHAR(50) NOT NULL,
    animal_type   VARCHAR(10) NOT NULL,
    days_boarded  INT NOT NULL,
    owner_id      INT NOT NULL,
    boarded_on    DATETIME DEFAULT CURRENT_TIMESTAMP,
    CONSTRAINT fk_pet_owner FOREIGN KEY (owner_id)
        REFERENCES owners(owner_id) ON DELETE CASCADE
) ENGINE=InnoDB;

