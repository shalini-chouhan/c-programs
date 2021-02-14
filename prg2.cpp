#include<iostream>
using namespace std;
class A
{
public :
A()
{
    cout<<"A's constructor invoked"<<endl;
}
~A()
    {
        cout<<"A's destructor invoked"<<endl;
    }
};
class B:virtual public A
{
public :
B()
{
    cout<<"B's constructor invoked"<<endl;
}
~B()
    {
        cout<<"B's destructor invoked"<<endl;
    }
};
class C:virtual public A
{
public :
C()
{
    cout<<"C's constructor invoked"<<endl;
}
~C()
    {
        cout<<"C's destructor invoked"<<endl;
    }
};
class D:public B,public C
{
    public:
    D()
    {
        cout<<"D's constructor invoked"<<endl;
    }
    ~D()
    {
        cout<<"D's destructor invoked"<<endl;
    }
};
int main()
{
    D d;
    return 0;
}