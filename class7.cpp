#include<iostream>
using namespace std;
class Student
{
    int Rno;
    string name;
    float *m1;
    public:
    Student();
    Student(int,string,float);
    void display();
};
Student::Student()
{
    Rno=111;

}