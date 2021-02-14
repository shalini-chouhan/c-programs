#include<iostream>
using namespace std;
class circle
{
public:
double r;
circle()
{
r=0;
}
void get_radius()
{
    cin>>r;
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
void get_breadth()
{
    cin>>b;
}
void display()
{
    circle::display();
    cout<<"The area of rectangle is "<<r*b<<endl;
}
};
int main()
{
    rectangle r;
    cout<<"Enter the radius of circle : ";
    r.get_radius();
    cout<<"Enter the breadth of rectangle : ";
    r.get_breadth();
    r.display();
    return 0;
}