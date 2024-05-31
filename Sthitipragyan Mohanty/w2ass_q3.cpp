#include<iostream>
using namespace std;
void sort(int,int[]);
int main()
{
    int n;
    cout << "Enter the number of elements of the array:\n";
    cin >> n;
    int arr[n];
    cout << "Enter the array:\n";
    for(int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    cout << "The sorted array in ascending order is:\n";
    sort(n,arr);
    return 0;
}
void sort(int m,int a[])
{
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < m;j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i = 0;i < m;i++)
    cout << a[i] << " ";
}