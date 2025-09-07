#include <iostream>
#include"Person.h"
#include"Client.h"

using namespace std;

int main()
{

Client c( 1,"Ahmheed", "jk", 3000);
c.displayFun();
Client p(2, "mohamed", "ggo", 2000);

p.displayFun();
c.transfer_to(2000, p);
c.displayFun();
p.displayFun();


    return 0;
}
