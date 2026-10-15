@echo off
echo ==========================================
echo Pet Boarding Management System - Database Setup
echo ==========================================
echo.

:: Prompt for MySQL root password
set /p DB_PASS=Enter your MySQL root password: 

echo.
echo [1/3] Updating authentication plugin for root...
mysql -u root -p%DB_PASS% -e "ALTER USER 'root'@'localhost' IDENTIFIED WITH mysql_native_password BY '%DB_PASS%'; FLUSH PRIVILEGES;"

echo [2/3] Creating database...
mysql -u root -p%DB_PASS% -e "CREATE DATABASE IF NOT EXISTS pbms;"

echo [3/3] Importing database tables and data...
mysql -u root -p%DB_PASS% pbms < "%~dp0pbms_database.sql"

echo.
echo ==========================================
echo Database setup completed successfully!
echo ==========================================
pause