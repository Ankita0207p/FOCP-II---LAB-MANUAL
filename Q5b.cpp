//To swap two number by difference method
#include<iostream>
int main()
{
    //method: using third variable
    int a,b;
    std::cout<<"Enter two numbers: ";
    std::cin>>a>>b;
    int c = a;
    a = b;
    b = c;
    std::cout<<"After swapping: \nFirst number: "<<a<<"\nSecond number: "<<b;

 
    //method : Using operator
    int x,y;
    std::cout<<"\nEnter two numbers: ";
    std::cin>>x>>y;
    x = x+y;
    y = x-y;
    x = x-y;
    std::cout<<"After swapping: \nFirst number: "<<x<<"\nSecond number: "<<y;


    //method : Using bitwise XOR operator
    int p,q;
    std::cout<<"\nEnter two numbers: ";
    std::cin>>p>>q;
    p = p^q;
    q = p^q;
    p = p^q;
    std::cout<<"After swapping: \nFirst number: "<<p<<"\nSecond number: "<<q;

    
    //method : Using function
    auto swap = [](int &m, int &n)
    {
        int temp = m;
        m = n;
        n = temp;
    };
  
    return 0;
}