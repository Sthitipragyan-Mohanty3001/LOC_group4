#include<iostream>
using namespace std;
void decToBin(int n)
{
    int bin[32];
    int i = 0;
    while (n > 0)
    {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    cout << bin[j];
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    decToBin(n);
    return 0;
}