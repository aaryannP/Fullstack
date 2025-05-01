-- Introduction to SQL
-- Lab 1: Create a new database and table

CREATE DATABASE school_db;
USE school_db;
CREATE TABLE students (
  student_id INT PRIMARY KEY,
  student_name VARCHAR(255),
  age INT,
  class VARCHAR(255),
  address VARCHAR(255)
);


-- Lab 2: Insert records and retrieve all records

INSERT INTO students VALUES
  (1, 'John Doe', 12, '7th', 'New York'),
  (2, 'Jane Doe', 11, '6th', 'Los Angeles'),
  (3, 'Bob Smith', 13, '8th', 'Chicago'),
  (4, 'Alice Johnson', 12, '7th', 'Houston'),
  (5, 'Mike Brown', 14, '9th', 'Seattle');

SELECT * FROM students;


-- SQL Syntax
-- Lab 1: Retrieve specific columns

SELECT student_name, age FROM students;


-- Lab 2: Retrieve students with age > 10

SELECT * FROM students WHERE age > 10;


-- SQL Constraints
-- Lab 1: Create table with constraints

CREATE TABLE teachers (
  teacher_id INT PRIMARY KEY,
  teacher_name VARCHAR(255) NOT NULL,
  subject VARCHAR(255) NOT NULL,
  email VARCHAR(255) UNIQUE
);


-- Lab 2: Implement FOREIGN KEY constraint

ALTER TABLE students
ADD COLUMN teacher_id INT,
ADD CONSTRAINT fk_teacher_id FOREIGN KEY (teacher_id) REFERENCES teachers(teacher_id);


-- Main SQL Commands and Sub-commands (DDL)
-- Lab 1: Create table

CREATE TABLE courses (
  course_id INT PRIMARY KEY,
  course_name VARCHAR(255),
  course_credits INT
);


-- Lab 2: Create database

CREATE DATABASE university_db;


-- ALTER Command
-- Lab 1: Modify table

ALTER TABLE courses ADD COLUMN course_duration VARCHAR(255);


-- Lab 2: Drop column

ALTER TABLE courses DROP COLUMN course_credits;


-- DROP Command
-- Lab 1: Drop table

DROP TABLE teachers;


-- Lab 2: Drop table and verify

DROP TABLE students;
SHOW TABLES;


-- Data Manipulation Language (DML)
-- Lab 1: Insert records

INSERT INTO courses (course_id, course_name, course_duration)
VALUES
  (1, 'Math', 3),
  (2, 'Science', 4),
  (3, 'English', 3);


-- Lab 2: Update record

UPDATE courses
SET course_duration = '1 semester'
WHERE course_id = 1;


-- Lab 3: Delete record

DELETE FROM courses
WHERE course_id = 2;


-- Data Query Language (DQL)
-- Lab 1: Retrieve all courses

SELECT * FROM courses;


-- Lab 2: Sort courses

SELECT * FROM courses
ORDER BY course_duration DESC;


-- Lab 3: Limit results

SELECT * FROM courses
LIMIT 2;


-- Data Control Language (DCL)
-- Lab 1: Create users and grant permission

CREATE USER 'user1'@'%' IDENTIFIED BY 'password';
GRANT SELECT ON courses TO 'user1'@'%';
CREATE USER 'user2'@'%' IDENTIFIED BY 'password';


-- Lab 2: Revoke permission and grant to user2

REVOKE INSERT ON courses FROM 'user1'@'%';
GRANT INSERT ON courses TO 'user2'@'%';


-- Transaction Control Language (TCL)
-- Lab 1: Insert records and commit

START TRANSACTION;
INSERT INTO courses (course_id, course_name, course_credits)
VALUES
  (4, 'History', 3);
COMMIT;


-- Lab 2: Insert records and rollback

START TRANSACTION;
INSERT INTO courses (course_id, course_name, course_credits)
VALUES
  (5, 'Geography', 3);
ROLLBACK;


-- Lab 3: Create savepoint and rollback

START TRANSACTION;
INSERT INTO courses (course_id, course_name, course_credits)
VALUES
  (6, 'Biology', 4);
SAVEPOINT sp1;
INSERT INTO courses (course_id, course_name, course_credits)
VALUES
  (7, 'Chemistry', 4);
ROLLBACK TO sp1;


-- SQL Joins
-- Lab 1: Create tables and perform INNER JOIN

create TABLE departments (
  department_id INT PRIMARY KEY,
  department_name VARCHAR(255)
);

CREATE TABLE employees (
  employee_id INT PRIMARY KEY,
  employee_name VARCHAR(255),
  department_id INT,
  FOREIGN KEY (department_id) REFERENCES departments(department_id)
);

INSERT INTO departments (department_id, department_name)
VALUES
  (1, 'Sales'),
  (2, 'Marketing'),
  (3, 'IT');

INSERT INTO employees (employee_id, employee_name, department_id)
VALUES
  (1, 'John Doe', 1),
  (2, 'Jane Doe', 2),
  (3, 'Bob Smith', 1);

SELECT employees.employee_name, departments.department_name
FROM employees
INNER JOIN departments
ON employees.department_id = departments.department_id;


-- Lab 2: Use LEFT JOIN

SELECT departments.department_name, employees.employee_name
FROM departments
LEFT JOIN employees
ON departments.department_id = employees.department_id;


-- SQL Group By
-- Lab 1: Group employees by department and count

SELECT departments.department_name, COUNT(employees.employee_id) AS employee_count
FROM employees
JOIN departments
ON employees.department_id = departments.department_id
GROUP BY departments.department_name;


-- Lab 2: Use AVG aggregate function

SELECT departments.department_name, AVG(employees.salary) AS average_salary
FROM employees
JOIN departments
ON employees.department_id = departments.department_id
GROUP BY departments.department_name;


-- SQL Stored Procedure
-- Lab 1: Write stored procedure to retrieve employees by department

DELIMITER &&
CREATE PROCEDURE GetEmployeesByDepartment(IN department_name VARCHAR(255))
BEGIN
  SELECT employees.employee_name
  FROM employees
  JOIN departments
  ON employees.department_id = departments.department_id
  WHERE departments.department_name = department_name;
END &&;


CALL GetEmployeesByDepartment('Sales');


-- Lab 2: Write stored procedure to retrieve course details

DELIMITER &&
CREATE PROCEDURE GetCourseDetails(IN course_id INT)
BEGIN
  SELECT *
  FROM courses
  WHERE courses.course_id = course_id;
END &&;

CALL GetCourseDetails(1);


-- SQL View
-- Lab 1: Create view to show employees and department names

CREATE VIEW EmployeeDepartment AS
SELECT employees.employee_name, departments.department_name
FROM employees
JOIN departments
ON employees.department_id = departments.department_id;

SELECT * FROM EmployeeDepartment;


-- Lab 2: Modify view to exclude employees with salary below $50,000

CREATE OR REPLACE VIEW EmployeeDepartment AS
SELECT employees.employee_name, departments.department_name
FROM employees
JOIN departments
ON employees.department_id = departments.department_id
WHERE employees.salary >= 50000;

SELECT * FROM EmployeeDepartment;


-- SQL Triggers
-- Lab 1: Create trigger to log changes to employees table

CREATE TABLE employee_log (
  log_id INT PRIMARY KEY AUTO_INCREMENT,
  employee_id INT,
  log_message VARCHAR(255),
  log_timestamp TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

DELIMITER &&
CREATE TRIGGER LogEmployeeInsert
AFTER INSERT ON employees
FOR EACH ROW
BEGIN
  INSERT INTO employee_log (employee_id, log_message)
  VALUES (NEW.employee_id, 'New employee inserted');
END && ;


-- Lab 2: Create trigger to update last_modified timestamp

ALTER TABLE employees
ADD COLUMN last_modified TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP;

DELIMITER &&
CREATE TRIGGER UpdateLastModified
BEFORE UPDATE ON employees
FOR EACH ROW
BEGIN
  SET NEW.last_modified = CURRENT_TIMESTAMP;
END && ;


-- Introduction to PL/SQL
-- Lab 1: Write PL/SQL block to print total number of employees

DELIMITER &&
CREATE PROCEDURE PrintEmployeeCount()
BEGIN
  DECLARE employee_count INT;
  SELECT COUNT(*) INTO employee_count FROM employees;
  SELECT employee_count;
END && ;

CALL PrintEmployeeCount();


-- Lab 2: Create PL/SQL block to calculate total sales

DELIMITER &&
CREATE PROCEDURE CalculateTotalSales()
BEGIN
  DECLARE total_sales DECIMAL(10, 2);
  SELECT SUM(sales_amount) INTO total_sales FROM orders;
  SELECT total_sales;
END && ;

CALL CalculateTotalSales();


-- PL/SQL Control Structures
-- Lab 1: Write PL/SQL block using IF-THEN condition

DELIMITER &&
CREATE PROCEDURE CheckDepartment(IN employee_id INT)
BEGIN
  DECLARE department_name VARCHAR(255);
  SELECT departments.department_name INTO department_name
  FROM employees
  JOIN departments
  ON employees.department_id = departments.department_id
  WHERE employees.employee_id = employee_id;

  IF department_name = 'Sales' THEN
    SELECT 'Employee is in Sales department';
  ELSE
    SELECT 'Employee is not in Sales department';
  END IF;
END && ;

CALL CheckDepartment(1);


-- Lab 2: Use FOR LOOP to iterate through employee records

DELIMITER &&
CREATE PROCEDURE DisplayEmployeeNames()
BEGIN
  DECLARE done INT DEFAULT FALSE;
  DECLARE employee_name VARCHAR(255);
  DECLARE cur CURSOR FOR SELECT employee_name FROM employees;
  DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = TRUE;

  OPEN cur;

  read_loop: LOOP
    FETCH cur INTO employee_name;
    IF done THEN
      LEAVE read_loop;
    END IF;
    SELECT employee_name;
  END LOOP;

  CLOSE cur;
END && ;

CALL DisplayEmployeeNames();


-- SQL Cursors
-- Lab 1: Write PL/SQL block using explicit cursor

DELIMITER &&
CREATE PROCEDURE DisplayEmployeeDetails()
BEGIN
  DECLARE done INT DEFAULT FALSE;
  DECLARE employee_id INT;
  DECLARE employee_name VARCHAR(255);
  DECLARE department_name VARCHAR(255);
  DECLARE cur CURSOR FOR
    SELECT employees.employee_id, employees.employee_name, departments.department_name
    FROM employees
    JOIN departments
    ON employees.department_id = departments.department_id;
  DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = TRUE;

  OPEN cur;

  read_loop: LOOP
    FETCH cur INTO employee_id, employee_name, department_name;
    IF done THEN
      LEAVE read_loop;
    END IF;
    SELECT employee_id, employee_name, department_name;
  END LOOP;

  CLOSE cur;
END && ;

CALL DisplayEmployeeDetails();


-- Lab 2: Create cursor to retrieve all courses

DELIMITER &&
CREATE PROCEDURE DisplayCourses()
BEGIN
  DECLARE done INT DEFAULT FALSE;
  DECLARE course_id INT;
  DECLARE course_name VARCHAR(255);
  DECLARE cur CURSOR FOR SELECT course_id, course_name FROM courses;
  DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = TRUE;

  OPEN cur;

  read_loop: LOOP
    FETCH cur INTO course_id, course_name;
    IF done THEN
      LEAVE read_loop;
    END IF;
    SELECT course_id, course_name;
  END LOOP;

  CLOSE cur;
END && ;

CALL DisplayCourses();


-- Rollback and Commit Savepoint
-- Lab 1: Perform transaction with savepoint and rollback

START TRANSACTION;
INSERT INTO courses (course_id, course_name)
VALUES (1, 'Math');
SAVEPOINT sp1;
INSERT INTO courses (course_id, course_name)
VALUES (2, 'Science');
ROLLBACK TO sp1;
COMMIT;
SELECT * FROM courses;


-- Lab 2: Commit part of transaction and rollback remaining changes

START TRANSACTION;
INSERT INTO courses (course_id, course_name)
VALUES (1, 'Math');
SAVEPOINT sp1;
INSERT INTO courses (course_id, course_name)
VALUES (2, 'Science');
RELEASE SAVEPOINT sp1;
INSERT INTO courses (course_id, course_name)
VALUES (3, 'English');
ROLLBACK;
SELECT * FROM courses;