// maximum sub array
#include <iostream>
using namespace std;
int MaximumSubarray(int arr[], int n)
{
    int count = 0;
    int cur = 0;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cur = cur + arr[i];
        maxi = max(cur, maxi);
        if (cur < 0)
        {
            cur = 0;
            count = 0;
        }
    }
    return maxi;
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
    cout << MaximumSubarray(arr, n);
    // Enter Code Here
}