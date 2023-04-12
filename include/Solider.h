#pragma once
#include <string>
#include <Gun.h>
using namespace std;

class Solider
{
    public:
        Solider(string name);
        ~Solider();
        void addBulletToGun(int num);
        bool fire();
        void addGun(Gun *ptr_gun);

    private:
        string  _name;
        Gun *_ptr_gun;


};