#include  "Gun.h"
#include<iostream>
using namespace std;

void Gun::addbullet(int bullet_num)
{
    cout<<"111"<<endl;
    this->_bullet_count += bullet_num;

}

bool Gun::shoot()
{

    if(this->_bullet_count <= 0)
    {
            cout <<"no bullet"<< endl;
            return false;
}
    this->_bullet_count -= 1;
    cout << "K.O." <<endl;
    return true;
}