#ifndef VALID_H
#define VALID_H
#include <iostream>
#include <string>
using namespace std;
class Valid {
public:

    static bool CheckName(string name) {
        bool flag = false;
        for (int i = 0;i < name.size();i++) {
            flag = false;
            if (isalpha(name[i]) && name.size() > 5 && name.size() < 20) {
                flag = true;
            }
        }
        return flag;
    }

    static bool CheckPassword(string password) {
        bool flag = false;
        for (int i = 0;i < password.size();i++) {
            flag = false;
            if (password.size() > 5 && password.size() < 20) {
                flag = true;
            }
        }
        return flag;
    }

};


#endif // VALID_H
