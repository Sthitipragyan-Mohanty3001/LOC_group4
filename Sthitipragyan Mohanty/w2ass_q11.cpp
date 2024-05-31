#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num,n = 0,r;
    float p;
    cout << "Enter the number: ";
    cin >> num;
    r = num;
    while(num != 0)
    {
        p = pow((num % 10),3);
        n = n + p;
        num /= 10;
    }
    if(n == r)
    cout << "The number is armstrong.";
    else
    cout << "The number is not armstrong.";
    return 0;
}