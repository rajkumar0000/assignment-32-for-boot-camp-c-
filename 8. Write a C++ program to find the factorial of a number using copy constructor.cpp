// 8. Write a C++ program to find the factorial of a number using copy constructor
#include<iostream>
using namespace std;
class fectorial
{
    int fect=1;
public:
    fectorial(){}
    fectorial(int n)
    {
        for(int i=1;i<=n;i++)
        {
            fect=fect*i;
        }
    }
    void dispaly()
    {
        cout<<"fectorial    :   "<<fect<<endl;
    }
};
int main()
{
    fectorial f1(3);
    f1.dispaly();
    fectorial f2(5);
    f2.dispaly();
    fectorial f3(10);
    f3.dispaly();
}
