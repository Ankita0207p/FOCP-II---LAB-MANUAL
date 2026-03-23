//check if the number is prime or not prime
#include <iostream>
using namespace std;
int main(){
    int num,n,i,j;
    cout<<"choose your range: ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"enter the code: ";
        cin>>num;
        if(num<=1){
            cout<<num<<" is not a prime number"<<endl;
            continue;
        }
        for(j=2;j<=num/2;j++){
            if(num%j==0){
                cout<<num<<" is not a prime number"<<endl;
                break;
            }
        }
        if(j>num/2){
            cout<<num<<" is a prime number"<<endl;
        }
    }
    return 0;
}
