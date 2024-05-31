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
    sort(n,arr);
    cout << "The second smallest element of the array is " << arr[1];
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
}