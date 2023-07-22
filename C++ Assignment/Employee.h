

#ifndef STUDENT_H_
#define STUDENT_H_
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Employee
{
public:
	Employee(string, string, string,string , double, double);
	void setEmployeeID(string);
	void setFirstName(string);
	void setLastName(string);
	void setEmpAttribute(string);
	void setEmpAge(double);
	void setEmpSalary(double);
	void dataInPut();
	void displayData();

	string getEmployeeID();
	string getFirstName();
	string getLastName();
	string getEmpAttribute();
	double getEmpAge();
	double getEmpSalary();

private:
	string employeeID;
	string firstName;
	string lastName;
	string EmpAttribute;
	double EmpAge;
	double EmpSalary;

};



#endif /* STUDENT_H_ */
