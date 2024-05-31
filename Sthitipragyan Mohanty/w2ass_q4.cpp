#include<iostream>
using namespace std;
int main()
{
    int k = 1,m;
    cout << "Enter the number of rows: ";
    cin >> m;
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j <= i;j++)
        {
            cout << k << " ";
            k += 1;
        }
        cout << "\n";
    }
    return 0;
}