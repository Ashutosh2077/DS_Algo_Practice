#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    cin >> n;
    int arr[n];
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1] && arr[i] == 0)
        {
            flag = true;
        }
    }
    if (flag == true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}