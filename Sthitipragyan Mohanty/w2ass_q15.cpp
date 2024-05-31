#include <iostream>
using namespace std;
int main() 
{
    string str;
    string temp = "";
    cout << "Enter a string: ";
    getline(cin,str);
    int l = str.length();
    for (int i = 0;i < l;i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            temp = temp + str[i];
        }
    }
    str = temp;
    cout << "Output String: " << str;
    return 0;
}