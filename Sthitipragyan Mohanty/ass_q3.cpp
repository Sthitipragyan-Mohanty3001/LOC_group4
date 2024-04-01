#include<iostream>
using namespace std;
int main()
{
    int n,s = 0;
    cout << "Enter a number:";
    cin >> n;
    do
    {
        int r = n % 10;
        s += r;
        n /= 10;
    } while (n != 0);
    cout << "The sum of digits is: " << s;
}