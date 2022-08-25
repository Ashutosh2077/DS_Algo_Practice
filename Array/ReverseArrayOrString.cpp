#include <iostream>
// #include <algorithm>
using namespace std;
void reverseArray(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    for (int i = 0; i < size; i++)
    {
        while (s < e)
        {
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void reverseString(char arr[], int size)
{
    int s = 0;
    int e = size - 1;
    for (int i = 0; i < size; i++)
    {
        while (s < e)
        {
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
    }
}
void printString(char arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{

    // Enter Code Here

    cout << "Enter the size:-" << endl;
    int n = 5;
    cin >> n;
    int arr[n]; // for Array enable this
    // char arr[n]; // for string enable this
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // for Array
    cout << "Array Before Reverse:-" << endl;
    printArray(arr, n);
    reverseArray(arr, n);
    cout << "Array after Reverse:-" << endl;
    printArray(arr, n);

    // for String
    // cout << "String Before Reverse:-" << endl;
    // printString(arr, n);
    // reverseString(arr, n);
    // cout << "String after Reverse:-" << endl;
    // printString(arr, n);
}