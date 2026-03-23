#include<iostream>
using namespace std;
int main()
{
    int n[5];
    int evenCount = 0;
    int oddCount = 0;
    cout<<"Enter 5 numbers:";
    for(int i=0; i<5; i++)
    {
        cin>>n[i];
    }
    for(int i=0; i<5; i++)
    {
        if(n[i] % 2 == 0)
        evenCount+=n[i];
        else
        oddCount+=n[i];
    }
    cout<<"Sum of all Even numbers: "<<evenCount<<endl;
    cout<<"Sum of all Odd numbers: "<<oddCount<<endl;
}