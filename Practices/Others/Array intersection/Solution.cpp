#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void intersection(int *input1, int *input2, int size1, int size2)
{
    // Write your code here
    int i = 0, j = 0;
    sort(input1, input1 + size1);
    sort(input2, input2 + size2);
    while (i < size1 && j < size2)
    {
        /* code */
        if (input1[i] == input2[j])
        {
            cout << input1[i] << " ";
            i++;
            j++;
        }
        else if (input1[i] < input2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n;
        int *arr1 = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        cin >> m;
        int *arr2 = new int[m];
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }
        intersection(arr1, arr2, n, m);
    }
}