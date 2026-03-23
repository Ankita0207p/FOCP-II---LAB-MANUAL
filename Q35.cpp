//transpose a 2D matrix
#include <iostream>
using namespace std;
int main(){
    int num[3][3];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"enter the number:";
            cin>>num[i][j];
        }
    }
    for(j=0;j<3;j++){
        for(i=0;i<3;i++){
            cout<<num[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}