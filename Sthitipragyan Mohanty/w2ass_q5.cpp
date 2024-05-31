#include<iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter the number of elements of the array:\n";
    cin >> m;
    int a[m],b[m];
    cout << "Enter the array:\n";
    for(int i = 0;i < m;i++)
    {
        cin >> a[i];
    }
    cout << "The first array is: [";
    for(int i = 0;i < m;i++)
    {
        cout << a[i] << " ";
    }
    cout << "]\n";
    for(int i = 0;i < m;i++)
    {
        b[i] = a[i];
    }
    cout << "The copied array is: [";
    for(int i = 0;i < m;i++)
    {
        cout << b[i] << " ";
    }
    cout << "]";
    return 0;
}