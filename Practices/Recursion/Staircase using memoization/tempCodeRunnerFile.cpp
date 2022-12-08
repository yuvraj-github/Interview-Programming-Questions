#include <iostream>
using namespace std;

int staircase(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return staircase(n - 3) + staircase(n - 2) + staircase(n - 1);
}
int main()
{
    int n;
    cin >> n;
    int output = staircase(n);
    cout << output << endl;
}