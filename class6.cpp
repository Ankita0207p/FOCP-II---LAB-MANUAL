#include<iostream>
using namespace std;
class ElectricityBill
{
    int units;
    float billAmount;
    string customerName;
public:
    void input()
    {
        cout<<"Enter customer name: ";
        cin>>customerName;
        cout<<"Enter units consumed: ";
        cin>>units;
    }
    void calculateBill()
    {
        if(units<=100)
            billAmount=units*0.5;
        else if(units<=200)
            billAmount=100*0.5+(units-100)*0.75;
        else
            billAmount=100*0.5+100*0.75+(units-200)*1.0;
    }
    void display()
    {
        cout<<"Customer Name: "<<customerName<<endl;
        cout<<"Units Consumed: "<<units<<endl;
        cout<<"Bill Amount: "<<billAmount<<endl;
    }
};
int main()
{
    ElectricityBill bill;
    bill.input();
    bill.calculateBill();
    bill.display();
    return 0;
}