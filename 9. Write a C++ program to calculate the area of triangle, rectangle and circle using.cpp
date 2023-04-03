/*
    9. Write a C++ program to calculate the area of triangle, rectangle and circle using
    constructor overloading. The program should be menu driven.
*/
#include"iostream"
#include"math.h"
#define pi 3.14
using namespace std;
class equilateral_triangle
{
    int hypotanus;
    int hight;
    int bass;
    int area;
public:
    equilateral_triangle()
    {
        cout<<"\nEnter Hypotanus in cm  :   ";
        cin>>hypotanus;
        cout<<"Enter Hight in cm      :   ";
        cin>>hight;
        cout<<"Enter Bass in cm       :   ";
        cin>>bass;
        find_area();
    }
    void settriangle_sites()
    {
        cout<<"Enter Hypotanus in cm  :   ";
        cin>>hypotanus;
        cout<<"Enter Hight in cm      :   ";
        cin>>hight;
        cout<<"Enter Bass in cm       :   ";
        cin>>bass;
        find_area();
    }
    int find_area()
    {
        area=bass*hight;
        return area;
    }
    void show_area()
    {
        cout<<"Area is  -  "<<area<<"cm squre"<<endl;
    }

};
class triangle
{
    int frist;
    int second;
    int bass;
    int area;
public:
    triangle()
    {
        cout<<"\nEnter frist site in cm :   ";
        cin>>frist;
        cout<<"Enter second site in cm:   ";
        cin>>second;
        cout<<"Enter third site in cm :   ";
        cin>>bass;
        find_area();
    }
    int find_area()
    {
        int half_bass = bass/2;
        int k=frist*frist;
        int a=half_bass*half_bass;
        int l=sqrt(k-a);
        area=l*half_bass;
        return area;
    }
    void display()
    {
        cout<<"Area is -> "<<area<<"cm squre"<<endl;
    }
};
class rectangle
{
    int length;
    int width;
    int area;
public:
    rectangle()
    {
        cout<<"\nEnter Length in cm :   ";
        cin>>length;
        cout<<"Enter Width in cm  :   ";
        cin>>width;
        find_area();
    }
    int find_area()
    {
        return area = length*width;
    }
    void display()
    {
        cout<<"Area of Rectangle is -> "<<area<<"cm squre"<<endl;
    }
};
class circle
{
    int radius;
    int area;
public:
    circle()
    {
        cout<<"\nEnter Radius of circle in cm :   ";
        cin>>radius;
        find_area();
    }
    int find_area()
    {
        return area = pi*radius*radius;
    }
    void display()
    {
        cout<<"Area of circle is -> "<<area<<"cm srure"<<endl;
    }
};
int main()
{
    equilateral_triangle t1;
    t1.show_area();
    triangle t2;
    t2.display();
    rectangle r1;
    r1.display();
    circle c1;
    c1.display();
}
