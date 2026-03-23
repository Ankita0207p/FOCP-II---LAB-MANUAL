//Store 10 prices in an array and display the total price.
#include<iostream>
using namespace std;
int main()
{
    float prices[10];
    float total = 0.0;
    cout << "Enter prices of 10 items: ";
    for(int i = 0; i < 10; i++)
    {
        cin >> prices[i];
        total += prices[i];
    }
    cout << "Total Price: " << total << endl;
}