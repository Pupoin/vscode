#include <iostream>
#include <string>
#include "car.h"
#include <vector>
//
// success ~~!!
//
int main(int arg, char **agrv)
{

    int a = 300;
    int b[4] = {12, 232, 323, 3111};
    Car *c = new Car("wuling", "afds",b + 2);
    c->run();
    c->speed(29.2);
    // c->fly(false);

    int *p;
    p = b + 1;

    c->work(&a);

    // Car *d = new Car("wadfading", "10394", b + 2);

    vector<Ben *> aaa;
    Ben *ben = new Ben(new Car("wadfading", "10394", b + 2),

                       new Car("wadfading", "9999", b + 2));
    Ben *ben2 = new Ben(new Car("aaaa", "aaaaid", b + 2),

                        new Car("bbbb", "bbbbid", b + 2));

    Ben *bbb = new Ben(ben, ben2);

    // ben->fly(false);
    // // cout << be
    // aaa.push_back( new Ben(new Car("wadfading", "10394", b + 2)));

    // cout << aaa[0]->getCar()->getid() << endl;
    // cout << aaa.size() << endl;

    cout << "--------" << endl;
    Ben *ada = dynamic_cast<Ben*> (bbb->getCar());
    cout << ada->getCar()->getid();
    // cout << bbb->getid();

    delete c;

    return 0;
}