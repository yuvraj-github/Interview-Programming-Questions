#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseArrHelper(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;
    reverseArrHelper(arr, s + 1, e - 1);
}
void reverseArray(vector<int> &arr, int m)
{
    // Write your code here.
    if (m >= arr.size())
    {
        return;
    }
    int s = m+1;
    int e = arr.size() - 1;
    reverseArrHelper(arr, s, e);
}
int main()
{
    int n, m, y;
    cin >> n >> m;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> y;
        arr.push_back(y);
    }
    reverseArray(arr, m);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
