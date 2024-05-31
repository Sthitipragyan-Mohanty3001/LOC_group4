#include<iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter the number of elements of the array: ";
    cin >> m;
    int arr[m];
    cout << "Enter the array:\n";
    for(int i = 0;i < m;i++)
    {
        cin >> arr[i];
    }
    int max = 0,max_element;
    for(int i = 0;i < m;i++)
    {
        int count = 1;
        for(int j = i+1;j < m;j++)
        {
            if(arr[i] == arr[j])
            {
                count += 1;
            }
        }
        if(count > max)
        {
            max = count;
            max_element = arr[i];
        }
    }
    cout << "The maximum occurring integer is " << max_element << " which occurred " << max << " times";
}