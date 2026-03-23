#include<iostream>
using namespace std;
class MovieTicket
{
    string movie_name;
    int seat_num;
    int price;
    bool isbooked;
public:
MovieTicket();
MovieTicket(string m, int s, int p, bool b);
void bookTicket();
void cancelTicket();
void displayDetails();
void totalcost(int n);
};

int main()
{
    MovieTicket t1;
    t1.displayDetails();
    t1.bookTicket();
    t1.displayDetails();
    t1.cancelTicket();
    t1.displayDetails();
    t1.totalcost(3);
    return 0; 
}

MovieTicket::MovieTicket()
{
    movie_name="unknown";
    seat_num=0;
    price=200;
    isbooked=false;
}  
MovieTicket::MovieTicket(string m, int s, int p, bool b)
{
    movie_name=m;
    seat_num=20;
    price=200;
}
void MovieTicket::bookTicket()
{
    if(isbooked)
    {cout<<"Sorry, the ticket for "<<movie_name<<" is already booked."<<endl;}
    else
    {isbooked=true;
    cout<<"Congratulations! You have successfully booked a ticket for "<<movie_name<<"."<<endl;}
}
void MovieTicket::cancelTicket()
{
    if (isbooked)
    {isbooked=false;
    cout<<"You have successfully cancelled the ticket for "<<movie_name<<"."<<endl;}
    else
    {cout<<"Sorry, there is no booking for "<<movie_name<<" to cancel."<<endl;}
}
void MovieTicket::displayDetails()
{
    cout<<"Movie Name: "<<movie_name<<endl;
    cout<<"Seat Number: "<<seat_num<<endl;
    cout<<"Price: "<<price<<endl;
    cout<<"Booking Status: "<<(isbooked?"Booked":"Not Booked")<<endl;
}
void MovieTicket::totalcost(int n)
{
    cout<<"Total cost for "<<n<<" tickets is Rs."<<n*price<<endl;
}