//identify vowels, consonants, digits and special characters
#include <iostream>
using namespace std;
int main() 
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
    {
        // Check for vowels
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
        {
            cout << ch << " is a vowel.";
        } 
        else 
        {
            cout << ch << " is a consonant.";
        }
    } 
    else if (ch >= '0' && ch <= '9') 
    {
        cout << ch << " is a digit.";
    } 
    else 
    {
        cout << ch << " is a special character.";
    }

    return 0;
}