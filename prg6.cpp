#include<iostream>
using namespace std;
class circle
{
public:
double r;
circle()
{
r=2;
}

void display()
{
cout<<"Area of circle is :"<<3.14*r*r<<endl;
}
};
class rectangle:public circle
{
public:
double b;
rectangle()
{
    b=4;
}
void display()
{
    cout<<"The area of rectangle is "<<r*b<<endl;
}
};
class cylinder:public circle
{
public:
double h;
cylinder()
{
    h=6;
}
void display()
{
    circle::display();
    cout<<"The volume of cylinder is : "<<3.14*r*r*h<<endl;
}
};
int main()
{
    rectangle r;
    r.display();
    cylinder c;
    c.display();
    return 0;
}