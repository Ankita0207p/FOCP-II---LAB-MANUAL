//to find the largest and second largest number in an array of size 5
#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter 5 numbers: ";
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    int largest = arr[0];
    for(int i=1; i<5; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
            arr[i]=arr[0];
        } 
    }
    int secondLargest = arr[0];;
    for(int i=1; i<5; i++)
    {
        if(arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }
    cout<<"Largest number: "<<largest<<endl;
    cout<<"Second largest number: "<<secondLargest<<endl;
}