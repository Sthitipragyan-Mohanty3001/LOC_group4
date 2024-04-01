#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout << "Enter the angles of the triangle: ";
    cin >> x >> y >> z;
    if(x > 0 && y > 0 && z > 0)
    {
        if((x + y + z) == 180)
        cout << "Triangle is valid.";
        else
        cout << "Triangle is invalid.";
    }
    else
    cout << "Invalid angles entered.";
}