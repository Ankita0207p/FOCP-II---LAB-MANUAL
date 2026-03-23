#include<iostream>
using namespace std;
void computePerformance(int m[],int n)
{
int min=m[0],max=m[0],avg=m[0];
for(int i=0;i<10;i++)
{
    if(min>m[i])
    {min=m[i];}
    if (max<m[i])
    {max=m[i];}
    avg+=m[i];
}
cout<<"\nThe average is "<<avg/n;
cout<<"\nMinimum is "<<min;
cout<<"\nMaximum is "<<max;

}
int main()
{
    int marks[10]={56,78,67,98,76,23,90,66,89,75};
    computePerformance(marks,10);
    return 0;
}