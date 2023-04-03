/*
1. Create a class FLOAT that contains one float data member. Overload all the four
arithmetic operators so that they can operate on the objects of FLOAT.
*/
#include<iostream>
using namespace std;
class FLOAT
{
    float float_var;
public:
    FLOAT(){}
    FLOAT(float data)
    {
        float_var=data;
    }
    float getdata()
    {
        return float_var;
    }
    friend float operator +(FLOAT f1,FLOAT f2)
    {
        return f1.float_var+f2.float_var;
    }
    friend float operator -(FLOAT f1 , FLOAT f2)
    {
        return f1.float_var-f2.float_var;
    }
    friend float operator *(FLOAT f1 , FLOAT f2)
    {
        return f1.float_var*f2.float_var;
    }
    friend float operator /(FLOAT f1 ,FLOAT f2 )
    {

        return f1.float_var/f2.float_var;
    }
    friend void operator <<(ostream &out , FLOAT ft)
    {
        out<<ft.float_var;
    }
};
int main()
{
    FLOAT f1(5) , f2(20) ;
    cout<<f1.getdata()<<" + "<<f2.getdata()<<" = "<<f1+f2<<endl;
    cout<<f1.getdata()<<" - "<<f2.getdata()<<" = "<<f1-f2<<endl;
    cout<<f1.getdata()<<" * "<<f2.getdata()<<" = "<<f1*f2<<endl;
    cout<<f1.getdata()<<" / "<<f2.getdata()<<" = "<<f1/f2<<endl;

    return 100;
}
