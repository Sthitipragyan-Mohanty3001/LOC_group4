#include<iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3],s[3][3];
    cout << "Enter the first array:\n";
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter the second array:\n";
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            cin >> b[i][j];
        }
    }
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            s[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << "The sum of the two arrays is:\n";
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            cout << s[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}