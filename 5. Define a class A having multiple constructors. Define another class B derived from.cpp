/*
5. Define a class A having multiple constructors. Define another class B derived from
class A. Create derived class constructors and show use of constructor in this single
inheritance.
*/
#include<iostream>
using namespace std;
class A
{
public:

    A()
    {
        cout<<"A"<<endl;
    }
};
class B : public A
{
public:
    B():A()
    {
        cout<<"B"<<endl;
    }
};

int main()
{
    B b1;
}
