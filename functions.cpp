#include<iostream>
using namespace std;
void welcome(void);
void welcome(string);
int sum(int,int);
float sum(float,float);
double sum(double,double);
int main()
{
    string user_name;
    cout<<"\n Enter username: ";
    getline(cin,user_name);
    welcome();
    welcome(user_name);

    int a,b;
    cout<<"\n Enter two integers: ";
    cin>>a>>b;
    int A=sum(a,b);
    cout<<"\n Sum of Integers: "<<A;

    float x,y;
    cout<<"\n Enter two float numbers: ";
    cin>>x>>y;
    int X=sum(x,y);
    cout<<"\n Sum of float numbers: "<<X;

    double m,n;
    cout<<"\n Enter two float numbers: ";
    cin>>m>>n;
    int M=sum(m,n);
    cout<<"\n Sum of double numbers: "<<M;

    cout<<"\n Sum: "<<sum(123.456,12.567);

    return 0;
}


void welcome()
{cout<<"\n Welcome user";}

void welcome(string name)
{cout<<"\n Welcome "<<name;}

int sum(int n1,int n2)
{return(n1+n2);}

float sum(float n1,float n2)
{cout<<"Float called";
return(n1+n2);}

double sum(double n1,double n2)
{cout<<"\n double called";
return(n1+n2);} 