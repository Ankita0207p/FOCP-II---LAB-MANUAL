#include<iostream>
using namespace std;
void welcome(string fname="Guest", string lname="")
{cout<<"\n Welcome "<<fname<<lname;}
int main()
{
    welcome();
    welcome("Ankita");
    welcome("Ankita ","Pandey");                  
    cout<<"\n----"<<endl;
    return 0;
}