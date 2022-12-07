#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(int a[], string output, vector<string> &ans, int N, string mapping[], int index)
{
    if (index >= N)
    {
        ans.push_back(output);
        return;
    }
    int number = a[index];
    string value = mapping[number];
    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(a, output, ans, N, mapping, index + 1);
        output.pop_back();
    }
}
vector<string> possibleWord(int a[], int N)
{
    vector<string> ans;
    if (N == 0)
    {
        return ans;
    }
    string output = "";
    int index = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(a, output, ans, N, mapping, index);
    return ans;
}
int main()
{
    int N;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    vector<string> res = possibleWord(a, N);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";      
    }   
    cout<<endl;
}