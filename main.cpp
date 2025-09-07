#include <iostream>
#include"Person.h"
#include"Client.h"

using namespace std;

int main()
{

Client c( 1,"Ahmheed", "jkbght", 3000);
c.displayFun();
Client p(2, "mohamed", "ggohth4", 2000);

p.displayFun();
c.transfer_to(2000, p);
c.displayFun();
p.displayFun();
Client b(3,"Ahmed Maher","kfdkg4652",10000);
b.displayFun();
    return 0;
}
