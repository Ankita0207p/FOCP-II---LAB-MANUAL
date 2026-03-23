//store 5 elements in an array and count how many numbers are divisible by 3 and 5
#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int Count=0;
    cout<<"Enter 5 numbers: ";
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<5; i++)
    {
        if(arr[i] % 3 == 0 && arr[i] % 5 == 0)
        {Count++;}
    }
    cout<<"Count of numbers divisible by 3 and 5: "<<Count<<endl;
}