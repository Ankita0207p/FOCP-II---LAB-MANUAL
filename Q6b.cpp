//Accept number of employees and their basic salary.compute 12% bonus,net salary ans display results
#include<iostream>
int main()
{
    int n,salary;
    std::cout<<"Enter total number of employees: ";
    std::cin>>n;
    std::cout<<"Enter basic salary of "<<n<<" employees: \n";
    for(int i=1;i<=n;i++)
    {
        std::cout<<"Employee "<<i<<": ";
        std::cin>>salary;
        float bonus=0.12*salary;
        float net_salary=salary+bonus;
        std::cout<<"Bonus: "<<bonus<<"\n";
        std::cout<<"Net Salary: "<<net_salary<<"\n";
    }
    return 0; 
}