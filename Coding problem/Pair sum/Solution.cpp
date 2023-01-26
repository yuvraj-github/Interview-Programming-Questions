#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    // Write your code here.
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}
int main()
{
    int n, y, s;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> y;
        arr.push_back(y);
    }
    cin >> s;
    vector<vector<int>> output = pairSum(arr, s);
    for (int i = 0; i < output.size(); i++)
    {
        for (int j = 0; j < output[0].size(); j++)
        {
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
}