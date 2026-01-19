//Solution to compute simple interest
#include <iostream>
int main()
{
    float principal, rate, time, simple_interest;
    std::cout<<"Enter the principal amount: ";
    std::cin>>principal;
    std::cout<<"Enter the rate of interest: ";
    std::cin>>rate;
    std::cout<<"Enter the time in years: ";
    std::cin>>time;
    simple_interest = (principal * rate * time) / 100;
    std::cout<<"Simple Interest is: "<<simple_interest;
    return 0;
}