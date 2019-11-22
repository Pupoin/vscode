#include <iostream>
#include <string>
#include "car.h"

using namespace std;

Car::Car(string name, string id)
{
    this->name = name;
    this->id = id;
}

Car::~Car(){}

void Car::run()
{
    cout << "I am fine, and I can run !" << endl;
}

void Car::speed(double x)
{
    cout << "My speed is" << x << endl;
}

void Car::fly(bool isFly)
{
    if (isFly)
        cout << "I can fly" << endl;
    else
    {
        cout << "I can not fly" << endl;
    }
}