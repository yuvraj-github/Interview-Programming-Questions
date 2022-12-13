#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    // Write your code here.
    int i = 0, j = 0;
    vector<int> ans;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x, y;
        cin >> n >> m;
        vector<int> arr1;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            arr1.push_back(x);
        }
        vector<int> arr2;
        for (int i = 0; i < m; i++)
        {
            cin >> y;
            arr2.push_back(y);
        }
        vector<int> output = findArrayIntersection(arr1, n, arr2, m);
        for (int i = 0; i < output.size(); i++)
        {
            cout << output[i] << " ";
        }
        cout << endl;
    }
}
