#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include<string>
#include "Person.h"
#include"Valid.h"


class Employee :public Person{
	double salary;
public:
	Employee() {
		 salary = 0;
	}
	Employee(int id, string name, string password, double salary) :
		Person(id, name, password) {
		setSalary(salary);
	}
	void setSalary(double salary) {
		if (salary >= 5000) {
			this->salary = salary;
			cout << "Salary recoreded successfully : " <<endl;
		}
		else {
			double x;
			cout << "your salary must be great than 5000";
			cin >> x;
			setSalary(x);
		}
	}
	double getSalary() {
		return this->salary;
	}
	void displayFun() {
		cout << "ID = " << getId() << endl;
		cout << "Name = " << getName() << endl;
		cout << "Password = " << getPassword() << endl;
		cout << "Salary = : " << getSalary() << endl;
		cout << "\n===========================\n";
	}

};




#endif // EMPLOYEE_H
