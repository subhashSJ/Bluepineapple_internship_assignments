-- DROP
drop table if exists Employee;

-- CREATE
create table Employee(
  eId integer not null unique,
  eName varchar(50) not null,
  eAddress varchar(100),
  eMobile number(20) default null,
  eSalary integer,
  primary key(eId)
);

-- INSERT
insert into Employee values(1, 'Subhash Jadhav', 'Satara', 9673430474, 50000);
insert into Employee values(2, 'Dayanand Naykude', 'Indapur', 9878567600, 60000);
insert into Employee values(3, 'Mayur Patil', 'Jalgoan', 8605689081, 30000);
insert into Employee values(4, 'Akshay Bavale', 'Solapur', 9923917865, 40000);
insert into Employee (eId, eName, eAddress, eSalary)values(5, 'Ankush Deshmukh', 'amaravati', 55000);

-- SELECT
select * from Employee;

select " ";

select DISTINCT eName from Employee where eId=2;

-- UPDATE
update Employee
set eName = 'Dayanand Anna Naykude'
where eId = 2;

select "";

select eName from Employee where eId=2;

select "";

-- SELECT USING LOGICAL AND ARITHMETIC OPERATIONS
select eName from Employee where eAddress = 'amaravati' and eSalary < 70000;

select "";

select eId, eName from Employee where eSalary <= 50000;

select "";

select * from Employee where eAddress in ('Satara', 'Solapur', 'Pune');

-- ALTER
Alter table Employee add column eExperience integer default 0;

update Employee
set eExperience = 5
where eId = 3;

select "";

select * from Employee;

-- TRUNCATE TABLE Employee;

select "";

SELECT eName, eSalary FROM Employee WHERE eName LIKE 'Ak%';

-- DELETE
DELETE FROM Employee WHERE eId in (SELECT eId from Employee WHERE eSalary < 50000 );

select "";

select * from Employee;

select "";

-- AGGREGATE FUNCTIONS
select sum(eSalary) from Employee;
SELECT AVG(eSalary) FROM Employee;