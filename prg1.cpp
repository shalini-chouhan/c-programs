#include<iostream>
using namespace std;
class shape
{
public :
double a,b;
void get_data()
{
    cin>>a>>b;
}

};
class rectangle:public shape
{
public :
void display_area()
{
    cout<<"Area of rectangle is :"<<a*b<<endl;
}
};
class triangle:public shape
{
public :
void display_area()
{
    cout<<"Area of triangle is :"<<0.5*a*b<<endl;
}
};
int main()
{
    rectangle r;
    cout<<"Enter the lenght and breadth of rectangle"<<endl;
    r.get_data();
    r.display_area();
    triangle t;
    cout<<"Enter the altitude and base  of triangle"<<endl;
    t.get_data();
    t.display_area();
    return 0;


}
