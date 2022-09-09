#include <iostream>
using namespace std;
int main()
{
    // Enter Code Here
    string str;
    cin >> str;
    int s = 0;
    int e = str.length() - 1;
    bool flag = true;
    while (s < e)
    {
        if (str[s] != str[e])
        {
            flag = false;
        }
        s++;
        e--;
    }
    if (flag)
    {
        cout << "String is palindrome";
    }
    else
    {
        cout << "String is not palindrome";
    }
}