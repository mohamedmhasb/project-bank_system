#ifndef PERSON_H
#define PERSON_H
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
    Person( int id,string name, string password) {
        this->id=id;
        setName(name);
        setPassword(password);
    }
    void setId() {
        this->id = id;
    }
    void setName(string name) {
       // bool flag = false;
        //for (int i = 0;i < name.size();i++) {
         //   flag = false;
        //    if (isalpha(name[i]) && name.size() > 5 && name.size() < 20) {
              //  flag = true;
        //    }
       // }
        bool flag = Valid::CheckName(name);

        if (flag == true) {
            this->name = name;
            cout << "Name recorded succesfuly\n";
        }
        else {
            string x;
            cout << "Name must contain only letters and contain";
              cout << " 5:20 leter : ";
            cin >> x;
            setName(x);

        }

    }
    void setPassword(string password) {
        bool flag = Valid ::CheckPassword(password);
        if (flag == true) {
            this->password = password;
            cout << "Password recoreded succesfully\n";
        }
        else {
            string x;
            cout << "Password must contain 5:20 leter : ";
            cin >> x;
            setPassword(x);

        }
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
        cout << "\n===========================\n";
    }
};




#endif // PERSON_H
