#include <iostream>
#include <string>

#ifndef Car_H
#define Car_H

using namespace std;

class Car
{
public:
    Car();
    Car(string name, string id, int *year);
    ~Car();

    virtual void run();
    virtual void speed(double x);
    virtual void fly(bool isFly);

    void work(int *p);
    string getid();

protected:
    string name, id;
 
    int *year;
};

#endif

class Ben : public Car
{
public:
    Ben();
    Ben(Car *mycar, Car *mm = nullptr);
    ~Ben();
    void fly(bool isFly);
    Car *getCar();

protected:
    Car *mycar;
    Car *mm;
    int logo;
};
