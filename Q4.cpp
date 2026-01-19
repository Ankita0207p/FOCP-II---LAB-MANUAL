//Convert fahrenheit temperature to Celcius temperature
#include <iostream>
int main()
{
    float fahrenheit, celsius;
    std::cout<<"Enter temperature in Fahrenheit: ";
    std::cin>>fahrenheit;
    celsius = (fahrenheit - 32) * 5 / 9;
    std::cout<<"Temperature in Celsius is: "<<celsius;
    return 0;
}