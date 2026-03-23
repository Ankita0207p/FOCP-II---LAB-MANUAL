//password should atleast contain 1 lowercase,1 uppercase, 1 digit and 1 special character
#include<iostream>
using namespace std;
int main()
{
    string password;
    int lower=0, upper=0, digit=0, specialChar=0;
    cout<<"Enter your password: ";
    cin>>password;
    for(int i=0; i<password.length(); i++)
    {
        if(password[i]>='a' && password[i]<='z')
        lower=1;
        else if(password[i]>='A' && password[i]<='Z')
        upper=1;
        else if(password[i]>='0' && password[i]<='9')
        digit=1;
        else
        specialChar=1;
    }
    if(lower && upper && digit && specialChar)
    {cout<<"Valid Password";}
    else
    {cout<<"Invalid Password";}
}