//Area of Circle
#include<iostream>
int main()
{
    const float PI = 3.14;
    float radius;
    std::cout<<"Enter the radius of the circular fountain: ";
    std::cin>>radius;
    std::cout<<"Area covered by the circular fountain is: "<<(PI*radius*radius);
    return 0;
}