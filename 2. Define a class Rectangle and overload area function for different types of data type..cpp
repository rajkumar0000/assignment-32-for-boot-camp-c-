/*  2. Define a class Rectangle and overload area function for different types of data type.        */
#include<iostream>
using namespace std;
template <class T , class F = float>
class rectangle
{
    float langth;
    float width;
public:
    rectangle(){}
    rectangle(F l , F w)
    {
        langth=l;
        width=w;
    }
    T area_of_ractangle()
    {
        return langth*width;
    }

};
int main()
{
    rectangle <float,float>r1(2.5,3.7);
    int x;
    x=r1.area_of_ractangle();
    cout<<"int = "<<x<<endl;
    float y;
    y=r1.area_of_ractangle();
    cout<<"float = "<<y<<endl;
    return 0;
}
