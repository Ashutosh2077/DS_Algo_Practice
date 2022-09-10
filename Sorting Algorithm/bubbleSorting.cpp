#include <iostream>
using namespace std;

void OptimizedBubbleSort(int size, int arr[])
{
    for (int i = 0; i < size; i++)
    {
        bool check = false;
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                check = true;
            }
        }
        if (check == false)
        {
            break;
        }
    }
}

void BubbleSort(int size, int arr[])
{
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}
void printArray(int size, int arr[])
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    cout << "Enter the size of array" << endl;
    int n = 5;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    BubbleSort(n, arr);
    printArray(n, arr);
}