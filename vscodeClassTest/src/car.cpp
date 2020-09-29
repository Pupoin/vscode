#include <iostream>
#include <string>
#include "car.h"

using namespace std;

Car::Car(){}
Car::Car(string name, string id, int *year)
{
    this->name = name;
    this->id = id;
    this->year = year;
}

Car::~Car() {}

void Car::run()
{
    cout << "I am fine, and I can run !" << endl;
}

void Car::speed(double x)
{
    cout << "My speed is" << x << endl;
}

string Car::getid()
{
    return this->id;
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

void Car::work(int *p)
{
    cout << *p << " " << *year << " " << this->year << endl;
}

Ben::Ben(){}
Ben::Ben(Car *mycar, Car *mm)
{
    this->mycar = mycar;
    // this->logo = logo;
    this->mm = mm;
}
Ben::~Ben()
{
}
void Ben::fly(bool isFly)
{
    if (isFly)
        cout << "I can fly" << endl;
    else
    {
        cout << "I can not fly" << endl;
    }
}

Car *Ben::getCar()
{
    return this->mm;
}