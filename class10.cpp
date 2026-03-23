#include<iostream>
using namespace std;
class Book
{
    string title;
    float price;
    public:
    Book(string t, float p)
    {
        title=t;
        price=p;
    }
    void display()
    {
        cout<<"-----------------------------"<<endl;
        cout<<"Book Title: "<<title<<endl;
        cout<<"Book Price: "<<price<<endl;
        cout<<"-----------------------------"<<endl;
    }
};
int main()
{
    Book b1("ABC",10.99);
    Book b2("I",8.99);
    Book b3("1984",12.50);

    b1.display();
    b2.display();
    b3.display();

    return 0;
}