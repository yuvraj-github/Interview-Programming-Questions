#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void findSubsetsThatSumToKHelper(vector<int> arr, vector<vector<int>> &ans, vector<int> output, int n, int k, int index, int sum)
{
    if (index == n)
    {
        if (k == sum)
        {           
            ans.push_back(output);
        }
        return;
    }
    output.push_back(arr[index]);
    findSubsetsThatSumToKHelper(arr, ans, output, n, k, index + 1, sum + arr[index]);
    output.pop_back();
    findSubsetsThatSumToKHelper(arr, ans, output, n, k, index + 1, sum);
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    vector<vector<int>> ans;
    vector<int> output;
    findSubsetsThatSumToKHelper(arr, ans, output, n, k, 0, 0);
    sort(ans.begin(), ans.end());
    return ans;
}
int main()
{
    int n, x, m;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        arr.push_back(m);
    }
    cin >> x;
    vector<vector<int>> res = findSubsetsThatSumToK(arr, n, x);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}