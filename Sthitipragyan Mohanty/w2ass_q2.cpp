#include<iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the number of elements 1st and 2nd array:\n";
    cin >> m >> n;
    int a[m],b[n],c[m + n];
    cout << "Enter the first array:\n";
    for(int i = 0;i < m;i++)
    {
        cin >> a[i];
    }
    cout << "Enter the second array:\n";
    for(int j = 0;j < n;j++)
    {
        cin >> b[j];
    }
    for(int k = 0;k < m;k++)
    {
        c[k] = a[k];
    }
    for(int l = m;l < (m+n);l++)
    {
        c[l] = b[l-m];
    }
    cout << "Merged array is:\n";
    for(int i = m+n-1;i >=0;i--)
    {
        cout << c[i] << " ";
    }
    return 0;
}