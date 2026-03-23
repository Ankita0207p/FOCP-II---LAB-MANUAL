#include <iostream>
using namespace std;
int main(){
    int i,num;
    cout<<"enter the number: ";
    cin>>num;
    for(i=2;i<=num/2;i++){
        if(num%i==0){
             cout<<"it is not prime";
            break;
        }
    }

    if(i>num/2){
    cout<<"it is prime";}
    return 0;
}