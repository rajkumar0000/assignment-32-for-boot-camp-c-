/*
7. C++ Program to illustrate the use of Constructors in single inheritance of your choice.      */
#include<iostream>
#include<stdlib.h>         // SORRY , I AM NOT UNDERSTAND THIS QUSTION
using namespace std;

class name
{
    string name_str;
public:
    name()
    {
       // system("color a");
        cout<<"enter name : ";
        getline(cin,name_str);
    }
    string& getname()
    {
        return name_str;
    }
};
class age : public name
{
    int age_;
public:
    age()
    {
        cin.clear();
        cout<<"enter age : ";
        cin>>age_;
    }
    int getage()
    {
        return age_;
    }
};
class gender :public age
{
    char gen[5];
public:
    gender()
    {
        cin.clear();
        cout<<"enter gender : ";
        cin>>gen;
    }
    char* getgender()
    {
        return gen;
    }
};
class man : public gender
{
    string city;
public:
    man()
    {
        cin.clear();
        cout<<"enter city : ";
        cin>>city;
    }
    void display()
    {
        system("color a");
        cout<<"\n--------------------------\n";
        cout<<"name     :   "<<getname()<<endl;
        cout<<"Age      :   "<<getage()<<endl;
        cout<<"Gender   :   "<<getgender()<<endl;
        cout<<"City     :   "<<city<<endl;
        cout<<"\n--------------------------\n";
    }
};
int main()
{
    man m1;
    m1.display();
}
