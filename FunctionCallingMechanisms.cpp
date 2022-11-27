#include<iostream>
using namespace std;

//call by value
void fun(int no)
{
    cout<<"Inside call by value : "<<no<<"\n";
    no++;
    cout<<"Inside call by value : "<<no<<"\n";
}

//call by address
void gun(int *p)
{
    cout<<"Inside call by address : "<<*p<<"\n";
}

//call by reference
void sun(int &r)
{
    cout<<"inside call by reference : "<<r<<"\n";
}

int main()
{
    int i=10;
    int j=10;
    int k=10;

    fun(i);     // fun(10);
    cout<<i<<"\n";
    gun(&j);    // gun(200);
    cout<<j<<"\n";
    sun(k);     // sun(k);
    return 0;
}