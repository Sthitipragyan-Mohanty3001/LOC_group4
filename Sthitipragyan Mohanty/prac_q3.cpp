#include<iostream>
using namespace std;
int main()
{
    int d;
    cout << "Enter the distance in cm: ";
    cin >> d;
    cout << "The distance in m is: " << (float)d / 100.0 << endl;
    cout << "The distance in km is: " << (float)d / 100000.0;
}