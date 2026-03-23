//check if a number is palindrome
#include <iostream>
using namespace std;
int main(){
    int num,digit,temp,ans=0;
    cout<<"enter a number:";
    cin>>num;
    temp=num;
    while(temp>0){
        digit=temp%10;
        ans=ans*10+digit;
        temp=temp/10;
    }
    if(ans==num){
        cout<<"the number is a palindrome";
    }
    else{
        cout<<"the number is not a palindrome";
    }
    return 0;
}