#include <iostream>
using namespace std;
#define MOD 1000000007

int countDistinctWaysHelper(int n, int *ans)
{
    if (n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        return 0;
    }
    if (ans[n] != -1)
    {
        return ans[n];
    }
    ans[n] = (countDistinctWaysHelper(n - 2, ans) + countDistinctWaysHelper(n - 1, ans)) % MOD;
    return ans[n];
}
int countDistinctWays(int nStairs)
{
    //  Write your code here.
    int *ans = new int[nStairs + 1];
    for (int i = 0; i < nStairs + 1; i++)
    {
        ans[i] = -1;
    }
    return countDistinctWaysHelper(nStairs, ans);
    // return ans[nStairs];
}
int main()
{
    int n;
    cin >> n;
    int output = countDistinctWays(n);
    cout << output << endl;
}