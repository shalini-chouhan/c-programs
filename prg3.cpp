#include<iostream>
using namespace std;
class employee
{
public :
string name;
int id;
float salary;
void get_data()
{
    cout<<"Enter name"<<endl;
    cin>>name;
    cout<<"Enter id "<<endl;
    cin>>id;
}
};
class regular:public employee
{
public :
float da,hra,basic_salary;
void get1()
{
    cout<<"Enter DA ,HRA and Basic salary"<<endl;
    cin>>da>>hra>>basic_salary;
}
void display()
{
    salary=basic_salary+da+hra;
    cout<<"Regular"<<endl;
    cout<<"Name :"<<name<<endl;
    cout<<"Id :"<<id<<endl;
    cout<<"Salary"<<salary<<endl;
}
};
class parttime:public employee
{
public :
float h,pay;
void get1()
{
    cout<<"Enter no. of hours and pay per hour"<<endl;
    cin>>h>>pay;
}
void display()
{
    salary=h*pay;
    cout<<"Part time"<<endl;
    cout<<"Name :"<<name<<endl;
    cout<<"Id :"<<id<<endl;
    cout<<"Salary "<<salary<<endl;
}
};
int main()
{
    regular r;
    r.get_data();
    r.get1();
    r.display();
    parttime p;
    p.get_data();
    p.get1();
    p.display();
    return 0;
}