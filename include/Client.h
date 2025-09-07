#ifndef CLIENT_H
#define CLIENT_H


#include <iostream>
#include<string>
#include "Person.h"
#include"Valid.h"
using namespace std;



class Client :public Person {
    double balance;
public:
    Client() {
        balance = 0;
    }
    Client(int id, string name, string password, double balance):
        Person(id, name, password) {
        setBalance(balance);
    }
    void setBalance(double balance) {
        if (balance > 1500) {
            this->balance = balance;
        }
        else {
            double x;
            cout << "your balance must be great than 1500";
            cin >> x;
            setBalance(x);
        }

    }
    double getBalance() {
        return this->balance;
    }

    double withdraw(double amount) {
        if (amount <= balance) {
            this->balance -= amount;
        }
        else {
            cout << "Amount exceeded balance ";
        }
        return this->balance;
    }
    double transfer_to(double amount, Client& another) {
        if (balance >= amount) {
            this->balance -= amount;
            another.deposit(amount);
        }
        else {
            cout << "Amount exceeded balance ";
        }
        return this->balance;
    }

    double deposit(double amount) {
        return this->balance += amount;
    }


    void displayFun() {
        cout << "ID = " << getId() << endl;
        cout << "Name = " << getName() << endl;
        cout << "Password = " << getPassword() << endl;
        cout << "Balance = : " << getBalance() << endl;
        cout << "\n===========================\n";
    }

};
#endif // PERSON_H


