#include <iostream>
using namespace std;

int perfectSumHelper(int arr[], int n, int x, int tempsum, int index, int &count)
{
    if (index == n)
    {
        if (tempsum == x)
        {
            count++;
        }
        return count;
    }
    perfectSumHelper(arr, n, x, tempsum + arr[index], index + 1, count);
    perfectSumHelper(arr, n, x, tempsum, index + 1, count);
}
int perfectSum(int arr[], int n, int sum)
{
    int count = 0;
    return perfectSumHelper(arr, n, sum, 0, 0, count);
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