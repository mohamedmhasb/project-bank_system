#pragma once
#include "Client.h"
#include"Person.h"
class Employee : public Person {
protected:
	//Attribute
	double salary;

public:
	//Constructors
	Employee() : Person() {
		this->salary = 0.0;
	}

	Employee(string name, int id, string password, double salary) : Person(name, id, password) {
		this->salary = salary;
	}

	//Setter
	void setSalary(double salary) {
		this->salary = salary;
	}

	//Getter
	double getSalary() {
		return this->salary;
	}

	//Methods
	void displayFun() {
		Person::displayFun();
		cout << "Salary: " << this->salary << endl;
	}
};




