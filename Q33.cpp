//taking the input in an 2D array
#include <iostream>
using namespace std;
int main(){
    int i,j;
    int marks[3][5];
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            cout<<"enter the marks: ";
            cin>>marks[i][j];
        }
    }
    cout<<"the marks of 2nd subject of 1st student is:"<<marks[0][1]<<endl;
    cout<<"the marks of 5th subject of the 3rd student is:"<<marks[2][4];
    return 0;
}