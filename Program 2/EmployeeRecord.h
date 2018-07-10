/*******************************************************************
*   File Name: EmployeeRecord.cpp
*	Name: Antoine Lynch
*   Programming Assignment 1 
*   
*   This program is entirely my own work
*******************************************************************/

#pragma once

class EmployeeRecord 
{
private:
	int m_iEmployeeID;
	char m_sLastName[32];
	char m_sFirstName[32];
	int m_iDeptID;
	double m_dSalary;

public:
	EmployeeRecord();
	EmployeeRecord(int ID, char* fName, char* lName, int deptId, double sal);
	~EmployeeRecord();
	int getID();
	void setID(int ID);
	void getName(char *fname, char *lname);
	void setName(char *fname, char *lname);
	void getDept(int& d);
	void setDept(int d);
	void getSalary(double *sal);
	void setSalary(double sal);
	void printRecord();
};
