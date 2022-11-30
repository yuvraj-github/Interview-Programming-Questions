#include <iostream>
using namespace std;

int lastIndex(int input[], int n, int x)
{
    if (n == 0)
    {
        return -1;
    }
    if (input[n] == x)
    {
        return n;
    }
    lastIndex(input, n - 1, x);
}
int main()
{
    int n, x;
    cin >> n;
    int input[n];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    cin >> x;
    int output = lastIndex(input, n, x);
    cout << output << endl;
}