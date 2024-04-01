#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cout << "Enter the marks of the subjects: ";
    cin >> a >> b >> c >> d >> e;
    int t = a + b + c + d + e;
    float avg = (float)t / 5.0;
    float per = ((float)t * 100.0) / 500.0;
    cout << "Total marks: " << t << endl;
    cout << "Average of marks: " << avg << endl;
    cout << "Percentage: " << per << endl;
}