#include<iostream>
using namespace std;
void cube(float side);
void cuboid(float length,float breadth,float height);
void cylinder(float radius,float height);
int main()
{
    float side,length,breadth,height,radius;
    cout<<"Enter side of cube: ";
    cin>>side;
    cube(side);

    cout<<"\nEnter length, breadth and height of cuboid: ";
    cin>>length>>breadth>>height;
    cuboid(length,breadth,height);

    cout<<"\nEnter radius and height of cylinder: ";
    cin>>radius>>height;
    cylinder(radius,height);

    return 0;
}
void cube(float side)
{
    float volume=side*side*side;
    cout<<"Volume of cube: "<<volume;
}
void cuboid(float length,float breadth,float height)
{
    float volume=length*breadth*height;
    cout<<"Volume of cuboid: "<<volume;
}
void cylinder(float radius,float height)
{
    float volume=3.14*radius*radius*height;
    cout<<"Volume of cylinder: "<<volume;
}
