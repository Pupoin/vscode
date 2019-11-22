#include <iostream>
#include <string>

#ifndef Car_H
#define Car_H

using namespace std;

class Car 
{
    public :
        Car(string name, string id);
        ~Car();

        virtual void run();
        virtual void speed(double x);
        virtual void fly(bool isFly);




    protected:

        string name, id;
    

};




#endif

