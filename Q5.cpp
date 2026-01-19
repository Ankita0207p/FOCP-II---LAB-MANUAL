//Area of right angle triangle
#include<iostream>
int main()
{
    float base, height, area;
    std::cout << "Enter base of the triangle: ";
    std::cin >> base;
    std::cout << "Enter height of the triangle: ";
    std::cin >> height;
    area = 0.5 * base * height;
    std::cout << "Area of the right angle triangle is: " << area << std::endl;
    return 0;
}