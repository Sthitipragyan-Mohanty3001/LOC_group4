#include<iostream>
using namespace std;
int main()
{
    int a[3][3];
    cout << "Enter the array:\n";
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "The original array is:\n";
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "The transpose of the array is:\n";
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            cout << a[j][i] << " ";
        }
        cout << "\n";
    }
    return 0;
}