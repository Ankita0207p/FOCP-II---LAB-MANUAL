//finding out the maximum sales figure among n numbers
#include <iostream>
using namespace std;
int main(){
    int n,i,max,num;
    cout<<"the number of sales figure to be enterd is: ";
    cin>>n;
    cout<<"enter the first sales figure: ";
    cin>>max;
    for(i=0;i<=n;i++){
        cout<<"enter the sales figure: ";
        cin>>num;
        if(max<num){
            max=num;
        }
    }
    cout<<"the maximum sales figure is: "<<max;
    return 0;
}