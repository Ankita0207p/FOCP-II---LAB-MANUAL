//Applying 20% discount and compute the amount
#include<iostream>
int main()
{
    float amount,discounted_amount;
    std::cout<<"Enter the amount: ";
    std::cin>>amount;
    discounted_amount = amount - (0.2 * amount);
    std::cout<<"Total amount: "<<amount<<"\nAmount after 20% discount: "<<discounted_amount;
    return 0;
}