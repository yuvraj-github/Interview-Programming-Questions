#include <iostream>
using namespace std;
int count = 0;
void perfectSumHelper(int arr[], int n, int x, int sum, int index)
{
    if (index >= n)
    {
        return;
    }
    if (x == sum)
    {
        count++;
        cout << count << endl;
    }
    perfectSumHelper(arr, n, x, sum + arr[index], index + 1);
    perfectSumHelper(arr, n, x, sum, index + 1);
}
int perfectSum(int arr[], int n, int sum)
{
    // int count = 0;
    perfectSumHelper(arr, n, sum, 0, 0);
    return count;
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
    cout << perfectSum(arr, n, x) << endl;
}