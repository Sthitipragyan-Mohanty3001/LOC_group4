#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin,str);
    int l = str.length();
    int a = 0,sc = 0,d = 0;
    for(int i = 0;i < l;i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        a += 1;
        else if(str[i] >= '0' && str[i] <= '9')
        d += 1;
        else
        sc += 1;
    }
    cout << "Alphabets: " << a << "\nSpecial characters: " << sc << "\nDigits: " << d;
    return 0;
}