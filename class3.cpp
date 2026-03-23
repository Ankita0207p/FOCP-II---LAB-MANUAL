#include<iostream>
using namespace std;
class Rectangle
{
double length;
double breadth;
public:
void input()
{
    cout<<"Enter the Length: ";
    cin>>length;
    cout<<"Enter the breadth: ";
    cin>>breadth;
}
void area()
{
    double area=length*breadth;
    cout<<"Area of the Rectangle is "<<area;
}

void perimeter()
{
    double peri=2*(length+breadth);
    cout<<"\nPerimeter of the Rectangle is "<<peri;
}
};

class Square
{
double side;
public:
void input()
{
    cout<<"\nEnter the side: ";
    cin>>side;
}
void area()
{
    double area=side*side;
    cout<<"Area of the Square is "<<area;
}
};
int main()
{
Rectangle r1;
r1.input();
r1.area();
r1.perimeter();
Square s1;
s1.input();
s1.area();
}