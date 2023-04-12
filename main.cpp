#include<Gun.h>
#include<Solider.h>
#include<iostream>
#include<stdio.h>
using namespace std;
void test()
 {
    Solider kk("wkw");
    kk.addGun(new Gun("Ak47"));
    cout<<"222"<<endl;
    kk.addBulletToGun(20);
    kk.fire();
 }
 int main()
 {
cout<<"333"<<endl;
    test();
    return 0;
 }

 