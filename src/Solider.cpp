#include<Solider.h>
#include<iostream>

using namespace std;
Solider::Solider(string name)
{
    this->_name = name;
    this->_ptr_gun = nullptr;

}
void Solider::addGun(Gun *ptr_gun)
{
        this->_ptr_gun = _ptr_gun;
}

void Solider::addBulletToGun(int num)
{
        this-> _ptr_gun ->addbullet(num);
}

bool Solider::fire()
{
    return(this-> _ptr_gun->shoot());
}

Solider::~Solider()
{
    if(this->_ptr_gun==nullptr)
    {
        return;
    }
    delete this->_ptr_gun;
    this->_ptr_gun = nullptr;
}