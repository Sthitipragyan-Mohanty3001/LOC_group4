#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i = 1;i <= 100;i++)
    {
        if(i % 3 != 0 && i % 5 != 0)
        cout << i << endl;
        else
        {
            if(i % 3 == 0)
            cout << "Fizz" << endl;
            if(i % 5 == 0)
            cout << "Buzz" << endl;
        }
    }
}