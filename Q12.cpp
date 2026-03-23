//To check type of triangle based on sides
#include <iostream>
using namespace std;
int main() 
{
    int side1, side2, side3;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    if (side1 == side2 && side2 == side3) 
        cout << "The triangle is Equilateral.";
    else if (side1 == side2 || side2 == side3 || side1 == side3) 
        cout << "The triangle is Isosceles.";
    else 
        cout << "The triangle is Scalene.";

    return 0;
}