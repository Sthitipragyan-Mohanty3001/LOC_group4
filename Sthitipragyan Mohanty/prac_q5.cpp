#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout << "Enter the sides of the triangle: ";
    cin >> x >> y >> z;
    if(x > 0 && y > 0 && z > 0)
    {
        if(x == y && y == z)
        cout << "Equilateral triangle.";
        else if(x == y || y == z || x == z)
        cout << "Isosceles triangle.";
        else
        cout << "Scalene triangle.";
    }
    else
    cout << "Invalid triangle.";
}