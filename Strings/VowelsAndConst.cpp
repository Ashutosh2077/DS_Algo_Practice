#include <iostream>
using namespace std;
int main()
{
    // Enter Code Here
    string str;
    cin >> str;
    int c = 0;
    int v = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            c++;
        }
        else
        {
            v++;
        }
    }
    cout << "Vowels = " << v << "Constonant = " << c << endl;
}