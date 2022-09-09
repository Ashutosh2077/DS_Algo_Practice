#include <iostream>
using namespace std;
void swapTwoNumbers(int a, int b)
{
    // // swap by using swap function

    // swap(a, b);

    // // swap by using Extra Temp Variable
    // int temp;
    // temp = a;
    // a = b;
    // b = temp;

    // // Swap by additon

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a = " << a << " b = " << b << endl;
}
int main()
{
    // Enter Code Here
    string str;
    cout << "enter the string" << endl;
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

    cout << "Swap Two Number enter Two Numbers" << endl;
    int a, b;
    cin >> a >> b;
    swapTwoNumbers(a, b);
}