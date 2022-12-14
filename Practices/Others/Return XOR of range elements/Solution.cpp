/**
 * 
 * Given two integers L and R, the task is to find the XOR of elements of the range [L, R]. 
    Examples:

    Input: L = 4, R = 8 
    Output: 8 
    4 ^ 5 ^ 6 ^ 7 ^ 8 = 8

    Input: L = 3, R = 7 
    Output: 3  
 * 
 * 
*/


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