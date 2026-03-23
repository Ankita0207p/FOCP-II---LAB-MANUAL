#include<iostream>
using namespace std;
class SmartLight
{
    string brand;
    int brightness;
    bool isOn;
    public:
    SmartLight();  
    SmartLight(string b, int bright, bool on);
    void TurnOn();
    void TurnOff();
    void increaseBrightness();
    void decreaseBrightness();
    void displayStatus();
};

int main()
{
    SmartLight l1;
    l1.displayStatus();
    l1.TurnOn();
    l1.increaseBrightness();
    l1.displayStatus();
    l1.TurnOff();
    l1.displayStatus();
}


SmartLight::SmartLight()
    {brand="unknown";  
    brightness=40;
    isOn=false;}

SmartLight::SmartLight(string b, int bright, bool on)
    {brand=b;
    brightness=bright;
    isOn=on;}

void SmartLight::displayStatus()
{
    cout<<"Brand: "<<brand<<endl; 
    cout<<"Brightness: "<<brightness<<endl;
    cout<<"Status: "<<(isOn?"On":"Off")<<endl;
    cout<<"----"<<endl;
}

void SmartLight::decreaseBrightness()
{
    if (brightness>0)
    {brightness-=10;
    cout<<brand<<"light brightness decreased to "<<brightness<<endl;}
    else
    {cout<<brand<<"light is already at minimum brightness"<<endl;}
}

void SmartLight::increaseBrightness()
{
    if (brightness<100)
    {brightness+=10;
    cout<<brand<<"light brightness increased to "<<brightness<<endl;}
    else
    {cout<<brand<<"light is already at maximum brightness"<<endl;}
}

void SmartLight::TurnOn()
{
    if (!isOn)
    {isOn=true;
    cout<<brand<<"light turned on."<<endl;}
    else
    {cout<<brand<<"light is already on."<<endl;}
}

void SmartLight::TurnOff()
{
    if (isOn)
    {isOn=false;
    cout<<brand<<"light turned off."<<endl;}
    else
    {cout<<brand<<"light is already off."<<endl;}
}

int main()
{
    SmartLight l1;
    l1.displayStatus();
    l1.TurnOn();
    l1.increaseBrightness();
    l1.displayStatus();
    l1.TurnOff();
    l1.displayStatus();
}
    
    
