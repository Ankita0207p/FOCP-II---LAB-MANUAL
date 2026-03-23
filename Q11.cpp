//To compute amount after applying 10% discount based on 1000 purchase
#include <iostream>
using namespace std;
int main() 
{
    double purchaseAmount, finalAmount;
    cout << "Enter the purchase amount: ";
    cin >> purchaseAmount;

    if (purchaseAmount > 1000) 
        finalAmount = purchaseAmount * 0.90; // Apply 10% discount
    else 
        finalAmount = purchaseAmount; // No discount

    cout << "The final amount after discount (if applicable) is: " << finalAmount;

    return 0;
}