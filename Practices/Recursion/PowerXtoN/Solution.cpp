#include <iostream>
using namespace std;

int calculatePower(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return x * calculatePower(x, n - 1);
}
int main()
{
    int x, n;
    cin >> x >> n;
    int output = calculatePower(x, n);
    cout << output << endl;
}