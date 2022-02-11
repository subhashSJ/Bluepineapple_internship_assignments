DROP TABLE IF EXISTS Student;
DROP TABLE IF EXISTS Department;

CREATE TABLE Department(
  deptId INT PRIMARY KEY NOT NULL,
  deptName VARCHAR(20) UNIQUE,
  inTake INT,
  HOD VARCHAR(40)
);

INSERT INTO Department VALUES
(10, 'Maths', 40, 'Dr. Anil Khairnar'),
(11, 'Stat', 30, 'K. D. Masalkar'),
(12, 'Chemistry', 50, 'Dr. Anita Watekar'),
(13, 'Physics', 40, 'Dr. Lata Kadam');

SELECT * FROM Department;

SELECT "";

CREATE TABLE Student(
  Id INTEGER NOT NULL PRIMARY KEY,
  FirstName VARCHAR(20),
  LastName VARCHAR(20),
  Grade CHAR,
  deptId INTEGER NOT NULL,
  FOREIGN KEY(deptId) REFERENCES Department(deptId) 
);

INSERT INTO Student VALUES
(101, 'Sham', 'Ombale', 'A', 11),
(102, 'Raj', 'Naik', 'B', 11),
(103, 'Ram', 'Tilak', 'B', 10),
(104, 'Bharat', 'Kale', 'c', 13),
(105, 'Akshay', 'Mane', 'A', 13);

SELECT * FROM Student;

SELECT "";

SELECT DISTINCT  Student.deptId, deptName FROM Student, Department WHERE Student.deptId = Department.deptId;

SELECT "";

SELECT FirstName ||' '|| LastName AS FULLNAME, deptName FROM Student, Department WHERE Student.deptId = Department.deptId;

SELECT "";

SELECT FirstName, LastName, Grade FROM Student ORDER BY Grade;

SELECT "";

SELECT deptName,deptId FROM Department UNION ALL SELECT FirstName, LastName FROM Student;

SELECT "";

-- JOINS
SELECT deptName FROM Department INNER JOIN Student ON Department.deptId = Student.deptId;

SELECT "";

SELECT deptName FROM Department  JOIN Student ON Student.Grade IN ('A', 'B');


