//#ifndef CLIENT_H
//#define CLIENT_H

//==================== Client =============================
#include "Person.h"
#pragma once
using namespace std;



class Client :public Person {
    double balance;
public:
    Client() : Person() {
        this ->balance = 0.0;
    }
    Client( string name,int id, string password, double balance):
        Person( name,id, password) {
          this -> balance =balance;
    }
    void setBalance(double balance) {
        this -> balance = balance;
    }
    double getBalance() {
        return this->balance;
    }

    double withdraw(double amount) {
        if (amount <=  this ->balance) {
            this->balance -= amount;
            cout << "\nSuccessful transaction.\n";
        }
        else {
            cout << "\nAmount exceeded balance\n";
        }
        return this->balance;
    }
    double transfer_to(double amount, Client& another) {
        if (balance >= amount) {
            this->balance -= amount;
            another.deposit(amount);
            cout << "\nSuccessful transaction.\n";
        }
        else {
            cout << "\nAmount exceeded balance\n";
        }
        return this->balance;
    }
    void checkBalance(){
        cout << "Balance: "<< this ->balance<<endl;
    }

    double deposit(double amount) {
        cout << "\nSuccessful transaction.\n";
        return this->balance += amount;
    }


    void displayFun() {
        Person ::displayFun();
        cout << "Balance = : " << getBalance() << endl;

    }

};
//#endif // PERSON_H


