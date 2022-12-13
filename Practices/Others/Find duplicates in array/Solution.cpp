#include <bits/stdc++.h>
using namespace std;

vector<int> duplicates(int arr[], int n)
{
    // code here
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int index = arr[i]%n;
        arr[index] += n;
    }
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] / n) >= 2)
        {
            ans.push_back(i);
        }
    }
    if (ans.size() == 0)
    {
        return {-1};
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> ans = duplicates(a, n);
    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}