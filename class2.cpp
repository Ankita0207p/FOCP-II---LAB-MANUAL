#include<iostream>
using namespace std;
class Student
{
int roll_no;
string name;
int regis_no;
public:
int m1;
int m2;
int m3;

void student_entry()
{
    cout<<"\nEnter Roll No., Name, Registration Number: ";
    cin>>roll_no>>name>>regis_no;
}

void marks_entry()
{
    cout<<"Enter marks of three subjects: ";
    cin>>m1>>m2>>m3;
}

void student_details()
{
    cout<<"\nRoll Number: "<<roll_no;
    cout<<"\nStudent's Name: "<<name;
    cout<<"\nRegistration No.: "<<regis_no;
}

void Display_result()
{
    cout<<"\nMarks1: "<<m1<<", Marks2: "<<m2<<", Marks3: "<<m3;
    int total=m1+m2+m3;
    float percent=(total/300.0)*100.0;
    cout<<"\nPercentage Scored: "<<percent;
}
};

int main()
{
    Student s1;
    s1.student_entry();
    s1.marks_entry();
    s1.student_details();
    s1.Display_result();

}