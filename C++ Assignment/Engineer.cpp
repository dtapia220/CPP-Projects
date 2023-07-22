#include<iostream>
#include<string>
#include "Employee.h"

using namespace std;


void Employee::dataInPut()
{
	
	while (employeeID.length() != 5)
	{
		cout << "\nEmployee ID must be 5 characters long.\nEnter employee ID: ";
		cin >> employeeID;
	}

	while (firstName.empty())
	{
		cout << "\nEnter first name: ";
		cin >> firstName;
	}
	while (lastName.empty())
	{
		cout << "\nEnter last name: ";
		cin >> lastName;
	}
	while (EmpAge < 18 || EmpAge > 60)
	{
		cout << "\nEnter employee age (18-60): ";
		cin >> EmpAge;
	}
	while (EmpAttribute.empty())
	{
		cout << "\nEnter Employee Attribute: ";
		cin >> EmpAttribute;
	}
	while (EmpSalary < 30000 || EmpSalary > 150000)
	{
		cout << "\nEnter Salary (30,000 - 150,000): ";
		cin >> EmpSalary;
	}
}
void Employee::displayData()
{


	cout << "\n\nEmployee Data: ";
	cout << "\n-----------------------";
	cout << "\n Employee ID: " << employeeID
		<< "\n First Name: " << firstName
		<< "\n Last Name: " << lastName
		<< "\n Age: " << EmpAge 
		<< "\n Attribute: " << EmpAttribute
		<< "\n Salary: $" << EmpSalary;
	
}
