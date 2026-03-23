//taking input in 2D array and displaying there sum
#include <iostream>
using namespace std;
int main(){
    int num[3][3];
    int i,j,sum=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"enter your number:";
            cin>>num[i][j];
            sum+=num[i][j];
        }
    }
    cout<<"the sum is:"<<sum;
    return 0;
}