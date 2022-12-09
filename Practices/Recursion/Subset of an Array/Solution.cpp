#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> arr, vector<int> output, vector<vector<int>> &ans, int index)
{
    if (index >= arr.size())
    {
        ans.push_back(output);
        return;
    }   
    solve(arr, output, ans, index + 1);
    output.push_back(arr[index]);
    solve(arr, output, ans, index + 1);
}
vector<vector<int>> subsets(vector<int> &A)
{
    // code here
    vector<vector<int>> ans;
    vector<int> output;
    solve(A, output, ans, 0);
    sort(ans.begin(), ans.end());
    return ans;
}
int main()
{
    int n, x;
    cin >> n;
    vector<int> array;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        array.push_back(x);
    }
    vector<vector<int>> res = subsets(array);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}