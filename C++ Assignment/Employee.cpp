#include<iostream>
#include<string>
#include "Employee.h"

using namespace std;

int main()
{
	cout << "Employee Data\n------------------------ ";
	Employee Employee01("", "", "", "", 1, 1);

	
	for (int index = 0; index < 1; index++) {
		Employee01.dataInPut();
		Employee01.displayData();
	}

	return 0;
}



Employee::Employee(string id, string fname, string lname,  string attribute, double age, double salary)
{
	setEmployeeID(id);
	setFirstName(fname);
	setLastName(lname);
	setEmpAttribute(attribute);
	setEmpAge(age);
	setEmpSalary(salary);
}

void Employee::setEmployeeID(string id)
{
	employeeID = id;
}
void Employee::setFirstName(string fname)
{
	firstName = fname;
}
void Employee::setLastName(string lname)
{
	lastName = lname;
}
void Employee::setEmpAttribute(string attribute) {
	EmpAttribute = attribute;
}
void Employee::setEmpAge(double age) {
	EmpAge = age;
}
void Employee::setEmpSalary(double salary)
{
	EmpSalary = salary;
}

string Employee::getEmployeeID()
{
	return employeeID;
}
string Employee::getFirstName()
{
	return firstName;
}
string Employee::getLastName()
{
	return lastName;
}
string Employee::getEmpAttribute() {
	return EmpAttribute;
}
double Employee::getEmpAge() {
	return EmpAge;
}
double Employee::getEmpSalary()
{
	return EmpSalary;
}


