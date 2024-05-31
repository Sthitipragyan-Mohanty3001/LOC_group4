#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin,str);
    int l = str.length();
    int n = 0;
    for(int i = 0;i < l;i++)
    {
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
        n += 1;
    }
    cout << "The number of vowels in the string is " << n;
    return 0;
}