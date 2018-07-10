/*******************************************************************
*   File Name: EmployeeRecord.cpp
*	Name: Antoine Lynch
*   Programming Assignment 1
*
*   This program is entirely my own work
*******************************************************************/


/*
Points on Program 1 = 15/25
(Each programming assignment is worth 25 points)
Program crashes in the parameterized constructor because you have the arguments to strcpy reversed.
I am passing in quoted strings in fname and lname.  Note also that in the default constructor you are
creating new variables with the same name as the class member variables.  You initialize these local variables
but do not initialize the class member variables.
You may fix and resubmit before the DDD but there will be a 3 point penalty against the maximum 25 points.
*/
#include "EmployeeRecord.h"
#include <iostream>

using namespace std;


EmployeeRecord::EmployeeRecord() {
	m_iEmployeeID = 0;
	strcpy(m_sLastName, "");
	strcpy(m_sFirstName, "");
	m_iDeptID = 0;
	m_dSalary = 0.0;
}

EmployeeRecord::EmployeeRecord(int ID, char* fName, char* lName, int deptId, double sal) {
	m_iEmployeeID = ID;
	strcpy(m_sFirstName, fName);
	strcpy(m_sLastName, lName);
	m_iDeptID = deptId;
	m_dSalary = sal;
}

EmployeeRecord::~EmployeeRecord() {}

int EmployeeRecord::getID() {
	return m_iEmployeeID;
}
void EmployeeRecord::setID(int ID) {
	m_iEmployeeID = ID;
}

void EmployeeRecord::getName(char *fName, char *lName) {
	strcpy(fName, m_sFirstName);
	strcpy(lName, m_sLastName);
}

void EmployeeRecord::setName(char *fName, char *lName) {
	strcpy(m_sFirstName, fName);
	strcpy(m_sLastName, lName);
}


void EmployeeRecord::getDept(int& d) {
	d = m_iDeptID;
}

void EmployeeRecord::setDept(int d) {
	m_iDeptID = d;
}

void EmployeeRecord::getSalary(double *sal) {
	*sal = m_dSalary;
}

void EmployeeRecord::setSalary(double sal) {
	m_dSalary = sal;
}

void EmployeeRecord::printRecord() {
	cout << "================================" << endl;
	cout << "Employee ID is :    " << m_iEmployeeID << endl;
	cout << "First Name is  :    " << m_sFirstName << endl;
	cout << "Last Name is   :    " << m_sLastName << endl;
	cout << "Deptartment ID is : " << m_iDeptID << endl;
	cout << "Salary is :        " << m_dSalary << endl;
	cout << "================================" << endl;

}
