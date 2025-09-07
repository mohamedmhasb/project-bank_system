#ifndef ADMIN_H
#define ADMIN_H
#include <iostream>
#include<string>
#include "Person.h"
#include"Valid.h"
#pragma once
#include "Person.h"
class Admin :public Person{
	double salary;
public:
	Admin() {
		salary = 0;
	}
	Admin(int id, string name, string password, double salary) :
		Person(id, name, password) {
		setSalary(salary);
	}
	void setSalary(double salary) {
		if (salary >= 5000) {
			this->salary = salary;
			cout << "Salary recoreded successfully : "<<endl;
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




#endif // ADMIN_H
