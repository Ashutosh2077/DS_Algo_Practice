#include <iostream>
using namespace std;
int main()
{
    // Enter Code Here
    string str;
    cout << "enter the string";
    cin >> str;
    int s = 0;
    int e = str.length() - 1;
    if (str.length() < 2)
    {
        cout << str;
    }
    else
    {
        // swap(str[s], str[e]);
        char temp = str[s];
        str[s] = str[e];
        str[e] = temp;
        cout << str << endl;
    }
}