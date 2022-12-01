#include <iostream>
using namespace std;

int countZeros(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n <= 9)
    {
        return 0;
    }
    int smallAns = countZeros(n / 10);
    if (n % 10 == 0)
    {
        smallAns++;
    }
    return smallAns;
}
int main()
{
    int n;
    cin >> n;
    int output = countZeros(n);
    cout << output << endl;
}