//*
#include<iostream>
using namespace std;
class A
{
    public:
    int a;
};
    class B: virtual public A
    {
     public:
     int b;
};
    class C:virtual public A
    {
     public:
     int c;
       };
       class D: public B,public C
       {
           public:
           int d;
 };
    int main()
    {
        D obj;
        obj.a=10;
        obj.a=20;
        obj.b=30;
        obj.c=40;
        obj.d=50;
        cout<<" A= "<<obj.a<<"\n";
        cout<<" B= "<<obj.b<<"\n";
        cout<<" C= "<<obj.c<<"\n";
        cout<<" D= "<<obj.d<<"\n";
        return 0;
    }
