//check if the number is perfect or armstrong
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num,sum=0,temp,digit;
    int i,rem,digits=0,ans;
    cout<<"enter a number: ";
    cin>>num;
    for(i=1;i<=num/2;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num){
        cout<<"this is a perfect number";
    }
    else{
        cout<<"this is not a perfect number";
    }
       temp=num;
    while(temp>0){
        digits++;
        temp=temp/10;
    }
    sum=0;
    temp=num;
    while(temp>0){
        digit=temp%10;
        sum+=pow(digit,digits);
        temp=temp/10;
    }
    if(sum==num){
        cout<<"the number is an armstrong number";
    }
    else{
        cout<<"the number is not an armstrong number";
    }
    return 0;
}