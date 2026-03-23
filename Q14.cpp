//simple calculator made using switch cases
#include <iostream>
using namespace std;
int main(){
    int a,num1,num2;
    cout<<"enter the number using which you can choose the operation";
    cout<<"your options are:-";
    cout<<"1 = +, 2 = -,3 = *,4 = /";
    cin>>a;

    switch (a){
    case 1:
    cout<<"enter your first number: ";
    cin>>num1;
    cout<<"enter your second number: ";
    cin>>num2;
    cout<<"the addition is: "<<num1+num2;
    break;
    case 2:
    cout<<"enter your first number: ";
    cin>>num1;
    cout<<"enter your second number: ";
    cin>>num2;
    cout<<"the subtraction is: "<<num1-num2;
    break;
    case 3:
    cout<<"enter your first number: ";
    cin>>num1;
    cout<<"enter your second number: ";
    cin>>num2;
    cout<<"the multiplication is: "<<num1*num2;
    break;
    case 4:
    cout<<"enter your first number: ";
    cin>>num1;
    cout<<"enter your second number: ";
    cin>>num2;
    cout<<"the division is: "<<num1/num2;
    break;}
    return 0;
}