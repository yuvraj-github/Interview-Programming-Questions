 sort(arr.begin(), arr.end(), greater<int>());
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        int l = i + 1;
        int r = n - 1;
        while (l < r)
        {
            vector<int> res;
            int val = arr[i] + arr[l] + arr[r];
            if (val == K)
            {
                res.push_back(arr[i]);
                res.push_back(arr[l]);
                res.push_back(arr[r]);
                l++;
                r--;
                ans.push_back(res);
            }
            else if (val < K)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    return ans;