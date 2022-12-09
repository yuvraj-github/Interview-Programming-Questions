#include <iostream>
using namespace std;

int binarySearchHelper(int arr[], int n, int x, int s, int e)
{
    if (s > e)
    {
        return -1;
    }
    int mid = (s + e) / 2;
    if (x == arr[mid])
    {
        return mid;
    }
    else if (x > arr[mid])
    {
        binarySearchHelper(arr, n, x, mid + 1, e);
    }
    else
    {
        binarySearchHelper(arr, n, x, s, mid - 1);
    }
}
int binarySearch(int arr[], int n, int x)
{
    return binarySearchHelper(arr, n, x, 0, n - 1);
}
int main()
{
    int n, x;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> x;
    int ans = binarySearch(arr, n, x);
    cout << ans << endl;
}