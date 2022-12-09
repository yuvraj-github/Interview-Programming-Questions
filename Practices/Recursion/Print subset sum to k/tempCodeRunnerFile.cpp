#include <iostream>
#include <string.h>
using namespace std;

void printSubsetsHelper(int arr[], int n, int x, int sum, int index, string output)
{
    if (index == n)
    {
        if (sum == x)
        {
            cout << output << endl;
        }
        return;
    }
    printSubsetsHelper(arr, n, x, sum + arr[index], index + 1, output + to_string(arr[index]) + ", ");
    printSubsetsHelper(arr, n, x, sum, index + 1, output);
}
void printSubsets(int arr[], int n, int x)
{
    printSubsetsHelper(arr, n, x, 0, 0, "");
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
    printSubsets(arr, n, x);
}