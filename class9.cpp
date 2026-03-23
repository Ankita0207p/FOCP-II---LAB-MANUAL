#include<iostream>
using namespace std;
class Car
{
    string brand;
    float price;
public:
    Car(string b, float p)
    {
        brand=b;
        price=p;
    }
    void display()
    {
        cout<<"Car Brand: "<<brand<<endl;
        cout<<"Car Price: "<<price<<endl;
    }
};
int main()
{
    Car c1("Toyota",25000.50);
    c1.display();
    return 0;
}