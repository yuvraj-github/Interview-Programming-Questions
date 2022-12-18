#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int TotalPairs(vector<int> nums, int k)
{
    // Code here
    sort(nums.begin(), nums.end(), greater<int>());
    unordered_map<int, int> m;
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int val = k + nums[i];
        if (m[val] && m[val] > -1)
        {
            count++;
            m[val] = -1; // set frequency of value -1 for uniqueness.
        }
        if (!m[nums[i]]) // check already exists value.
        {
            m[nums[i]]++;
        }
    }
    return count;
}
int main()
{
    int n, k, x;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }
    cin >> k;
    cout << TotalPairs(nums, k) << endl;
}