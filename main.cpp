#include <iostream>
#include"Person.h"
#include"Client.h"
#include"Employee.h"
#include"Admin.h"
#include"Valid.h"
using namespace std;

int main()
{


Employee e( "Ahm",12, "jf", 2000);
e.setName(Validation::enterName());
e.setPassword(Validation::enterPassword());
e.setSalary(Validation::enterSalary());

Admin a( "Hassab",12, "Hassab235", 15000);
a.setName(Validation::enterName());
a.setPassword(Validation::enterPassword());
a.setSalary(Validation::enterSalary());
e.displayFun();
a.displayFun();


    return 0;
}
