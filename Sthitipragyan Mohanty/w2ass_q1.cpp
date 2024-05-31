#include<iostream>
using namespace std;
int count(int,int,int[]);
int main()
{
    int k;
    cout << "Enter number of elements of the array:\n";
    cin >> k;
    int arr[k],num;
    cout << "Enter the array:\n";
    for(int i = 0;i < k;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number you want to count: ";
    cin >> num;
    int c = count(k,num,arr);
    cout << "Count of " << num << " is " << c << endl;
    return 0;
}
int count(int p,int n, int a[])
{
    int q = 0;
    for(int j = 0;j < p;j++)
    {
        if(a[j] == n)
        q++;
    }
    return q;
}
