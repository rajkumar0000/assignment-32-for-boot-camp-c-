/*
4. Define a class Addition that can add 2 or 3 numbers of different data types using
function overloading.
*/
#include<iostream>
using namespace std;
class Addition
{
    double sum;
public:
    //Addition(){}
    Addition(int a , int  b)
    {
        sum=a+b;
    }
    Addition(double a , double b)
    {
        sum=a+b;
    }
    Addition(int a,int b,int c)
    {
        sum=a+b+c;
    }
    Addition(double a,double b, double c)
    {
        sum=a+b+c;
    }
    friend ostream& operator<<(ostream &out , Addition addi)
    {
        out<<addi.sum<<endl;
        return out;
    }
};
int main()
{
    Addition a1(6,5);
    Addition a2(4.7,8.4);
    Addition a3(7,8,4);
    Addition a4(6.4,7.2,5.3);
    cout<<a1<<a2<<a3<<a4;
}
