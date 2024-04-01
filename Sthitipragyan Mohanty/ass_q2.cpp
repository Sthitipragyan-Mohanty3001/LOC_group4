#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    if(n < 0)
    cout << "Negative";
    else if(n > 0)
    cout << "Positive";
    else
    cout << "Zero";
}