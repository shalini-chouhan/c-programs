#include<iostream>
using namespace std;
class circle
{
public:
double r;
}
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
int b;
rectangle()
{
    b=5;
}
void display1()
{
    cout<<"The area of rectangle is "<<r*b<<endl;
}
};
class box:public rectangle
{
public:
double h;
box()
{
    h=4;
}
void display_volume()
{
    cout<<"Volume of box : "<<r*b*h<<endl;
}
};
int main()
{
    box b;
    b.display();
    b.display1()
    b.display_volume();
    return 0;
}
