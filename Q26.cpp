//Compute total marks and percentage of array of 5 subjects
#include<iostream>
using namespace std;
int main()
{
    float marks[5];
    int total = 0;
    float percentage;
    cout << "Enter marks of 5 subjects: ";
    for(int i = 0; i < 5; i++)
    {
        cin >> marks[i];
        total += marks[i];
    }
    percentage = (total / 500.0) * 100;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;
}