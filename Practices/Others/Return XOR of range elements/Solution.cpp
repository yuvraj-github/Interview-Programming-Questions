#include <bits/stdc++.h>
using namespace std;

int solution(int M, int N)
{
    int ans = 0;
    for (int i = M; i <= N; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

// Driver code
int main()
{
    int l = 5, r = 8;

    cout << solution(l, r);

    return 0;
}