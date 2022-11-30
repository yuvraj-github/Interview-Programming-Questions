#include <iostream>
using namespace std;

int multiplyNumbers(int m, int n)
{
    if (m == 0 || n == 0)
    {
        return 0;
    }
    return m + multiplyNumbers(m, n - 1);
}
int main()
{
    int m, n;
    cin >> m >> n;
    int output = multiplyNumbers(m, n);
    cout << output << endl;
}