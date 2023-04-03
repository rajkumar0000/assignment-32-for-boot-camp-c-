/*
6. C++ Program to illustrate the use of Constructors in multilevel inheritance of your
choice.
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
class C :public B
{
public:
    C()
    {
        cout<<"c"<<endl;
    }
};
class D :public C
{
public:
    D()
    {
        cout<<"D"<<endl;
    }
};

int main()
{
    D d1;
}
