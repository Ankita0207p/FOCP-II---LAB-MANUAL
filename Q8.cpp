//Divisible by 3,5 or both
#include <iostream>
using namespace std;
int main() 
{
    int number;
    cout<<"Enter an integer: ";
    cin>>number;

    if (number % 3 == 0 && number % 5 == 0)
        cout << "BuzzFuzz";
    else if (number % 3 == 0) 
        cout << "Buzz";
    else if (number % 5 == 0)
        cout << "Fuzz";
    else 
        cout << number << " is not divisible by 3 or 5.";

    return 0;
}