//accept salary of 10 employees in an array, compute total salary and average salary
#include<iostream>
using namespace std;
int main()
{
    float salaries[10];
    float totalSalary = 0.0;
    float averageSalary;
    
    cout << "Enter salaries of 10 employees: ";
    for(int i = 0; i < 10; i++)
    {
        cin >> salaries[i];
        totalSalary += salaries[i];
    }
    
    averageSalary = totalSalary / 10;
    
    cout << "Total Salary: " << totalSalary << endl;
    cout << "Average Salary: " << averageSalary << endl;
    
    return 0;
}