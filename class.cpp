#include<iostream>
using namespace std;
class Car
{
public:
string brand;
int make_year;
string color;
string car_type;

void display()
{
    cout<<"\n Brand of the car: "<<brand;
    cout<<"\n Make year of the car: "<<make_year;
    cout<<"\n Car Type: "<<car_type;
    cout<<"\n Color of car: "<<color;
}

void car_entry()
{
    cout<<"\n Enter Brand, Make Year, Car type, Color: ";
    cin>>brand>>make_year>>car_type>>color;
}
};

int main()
{
Car c1;
c1.car_entry();
c1.car_type="Hatch Back";
c1.brand="ABC";
c1.display();
return 0;
}