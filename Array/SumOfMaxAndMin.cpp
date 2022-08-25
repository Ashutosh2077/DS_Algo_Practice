#include <iostream>
using namespace std;
int sumOfMaxAndMin(int arr[], int size)
{
    int Maxi = INT_MIN;
    int Mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        Maxi = max(Maxi, arr[i]);
        Mini = min(Mini, arr[i]);
    }
    return (Maxi + Mini);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << sumOfMaxAndMin(arr, n);
}