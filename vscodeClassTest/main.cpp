#include <iostream>
#include <string>
#include "car.h"
//
// success ~~!!
//
int main(int arg, char** agrv)
{
    int a =0;
    Car * c = new Car("wuling", "10394");
    c->run();
    c->speed(29.2);
    c->fly(false);


    delete c;

    return 0;
}