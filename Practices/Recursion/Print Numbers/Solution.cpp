#include <iostream>
using namespace std;

void printNumbers(int n)
{
    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    printNumbers(n - 1);
    cout << n << " ";
}
int main()
{
    int n;
    cin >> n;
    printNumbers(n);
}