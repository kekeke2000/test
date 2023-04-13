#include<Gun.h>
#include<Solider.h>
#include<iostream>
#include<stdio.h>
using namespace std;
void test()
 {
   // cout<<"gogo"<<endl;
    Solider kk("wkw");
    kk.addGun(new Gun("Ak47"));
    kk.addBulletToGun(20);
    kk.fire();
 }
 int main()
 {
cout<<"333"<<endl;
    test();
    return 0;
 }

 