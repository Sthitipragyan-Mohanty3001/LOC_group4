#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout << "Enter the two numbers: ";
    cin >> x >> y;
    char c;
    cout << "Enter the operation you want to carry out: ";
    cin >> c;
    switch (c)
    {
    case '+':
        cout << "x + y =" << x + y;
        break;
    case '-':
        cout << "x - y =" << x - y;
        break;
    case '*':
        cout << "x * y =" << x * y;
        break;  
    case '/':
        cout << "x / y =" << (float)x / (float)y;
        break;  
    case '%':
        cout << "x % y =" << x % y;
        break;
    default:
        cout << "Invalid Operator Entered";
        break;
    }
}