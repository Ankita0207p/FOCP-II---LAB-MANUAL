#include <iostream>
using namespace std;
//multiplying two 2D matrix 
int main(){
    int i,j,k;
    int A[3][2];
    int B[2][3];
    int C[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            cout<<"enter the elements of matrix A:";
            cin>>A[i][j];
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            cout<<"enter the elements of matrix B:";
            cin>>B[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            C[i][j]=0;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<2;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    cout<<"the resultant matrix is";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<C[i][j];
        }
        cout<<endl;
    }
    return 0;
}