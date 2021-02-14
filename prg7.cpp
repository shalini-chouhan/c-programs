#include<iostream>
using namespace std;
class student
{
public:
string name;
int roll;
void get_name()
{
    cout<<"Enter name"<<endl;
    cin>>name;
    cout<<"Enter roll no. "<<endl;
    cin>>roll;
}
};
class sport:virtual public student
{
public:
int s_grade;
void get_sgrade()
{
    cin>>s_grade;
}
};
class exam:virtual public student
{
public:
int e_grade;
void get_egrade()
{
    cin>>e_grade;
}
};
class result:public sport,public exam
{

public:
string grade;
void display()
{
 switch((s_grade+e_grade)/20)
 {
     case 10 :
     grade='O';
     break;
     case 9 :
     grade='O';
     break;
     case 8:
     grade='E';
     break;
     case 7:
     grade='A';
     break;
     case 6 :
     grade='B';
     break;
     case 5:
     grade='C';
     break;
     case 4:
     grade='D';
     break;
     default:
     grade="Fail";
 }
 cout<<"Name :"<<name<<endl;
 cout<<"Roll no. :"<<roll<<endl;
 cout<<"Grade is : "<<grade<<endl;
}

};
int main()
{
    result r;
    r.get_name();
    cout<<"Enter marks of student in sports"<<endl;
    r.get_sgrade();
    cout<<"Enter marks of student in exam"<<endl;
    r.get_egrade();
    r.display();
    return 0;

}
