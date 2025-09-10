//#ifndef VALID_H
//#define VALID_H

//===============Validation class ==================
#pragma once
#include <iostream>
#include <string>
using namespace std;
class Validation {

    static bool validName(string name) {
        if(name.size()<5||name.size()>20)return false;
        for(int i=0;i< name.length();i++){
            if (!isalpha(name[i]))return false ;
        }
        return true;
    }

    static bool validPassword(string password) {
        if(password.size()<5||password.size()>20)return false;
        return true;
    }
public:
    static string enterPassword(){
        string password;
        system("cls");
        cout << "Enter password: ";
        cin >> password ;
        while (!validPassword(password)){
            system("cls");
            cout << "Invalid password\n";
            cout << "Name must be 5 to 20 character.\n";
            cout << "Enter password: ";
            cin >> password;
        }
        return password;
    }
    static string enterName(){
        string name;
        system("cls");
        cout << "Enter name: ";
        cin >> name ;
        while (!validName(name)){
            system("cls");
            cout << "Invalid name\n";
            cout << "Name must be 5 to 20 alphabtic character.\n";
            cout << "Enter name: ";
            cin >> name;
        }
        return name;
    }
    static double enterBalance(){
        double balance;
        cout << "Enter balance: ";
        cin >> balance;
        while(balance<1500){
            system ("cls");
            cout << "Invalid balance!\n";
            cout << "Balance must be at least 1500.\n";
            cout << "Enter balance: ";
            cin >> balance;
        }
        return balance;
    }

    static double enterSalary(){
        double salary;
        cout << "Enter salary: ";
        cin >> salary;
        while(salary<5000){
            system ("cls");
            cout << "Invalid salary!\n";
            cout << "salary must be at least 5000.\n";
            cout << "Enter salary: ";
            cin >> salary;
        }
        return salary;
    }
};


//#endif // VALID_H
