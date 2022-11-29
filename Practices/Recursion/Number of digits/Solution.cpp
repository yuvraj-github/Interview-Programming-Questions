#include <iostream>
using namespace std;

int countDigits(int n)
{
    if (n >= 1 && n <= 9)
    {
        return 1;
    }
    return 1 + countDigits(n / 10);
}
int main()
{
    int n;
    cin >> n;
    int output = countDigits(n);
    cout << output << endl;
}