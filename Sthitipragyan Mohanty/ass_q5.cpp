#include<iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter the radius: ";
    cin >> r;
    cout << "The diameter is: " << 2 * r << endl;
    cout << "The circumference is: " << 2 * 3.14 * r << endl;
    cout << "The area is: " << 3.14 * r * r;
}