#include<iostream>
using namespace std;
void swap(int &m,int &n) 
{
    m=m+n;
    n=m-n;
    m=m-n;
}
void swap(float &m,float &n) 
{
    m=m+n;
    n=m-n;
    m=m-n; 
}

int main()
{
    int a=2, b=3;
    cout<<"before swap a= "<<a<<" b= "<<b;
    swap(a,b);
    cout<<"\nAfter swap a= "<<a<<" b= "<<b;

    float c=2.5f, d=3.5f;
    cout<<"\nbefore swap a= "<<c<<" b= "<<d;
    swap(c,d);
    cout<<"\nAfter swap a= "<<c<<" b= "<<d;
    return 0;
}   