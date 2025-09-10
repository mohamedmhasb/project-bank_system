//#ifndef PERSON_H
//#define PERSON_H
//===================== Person ======================
#pragma once
#include"Valid.h"
#include <iostream>
#include<string>

using namespace std;



class Person {
protected:
     int id;
    string  name;
    string password;
public:
    Person() {
          id = 0;
    }
    Person( string name,int id, string password) {
        this->id=id;
        setName(name);
        setPassword(password);
    }
    void setId() {
        this->id = id;
    }
    void setName(string name) {
        this->name = name;
        }

    void setPassword(string password) {
        this->password = password;
        }

    int getId() {
        return this->id;
    }
    string getName() {
        return this->name;
    }
    string getPassword() {
        return this->password;
    }
    void displayFun() {
        cout << "ID = " << getId() << endl;
        cout << "Name = " << getName() << endl;
        cout << "Password = " << getPassword() << endl;

    }
};




//#endif // PERSON_H
