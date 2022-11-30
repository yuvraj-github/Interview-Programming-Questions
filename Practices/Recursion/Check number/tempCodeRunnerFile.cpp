#include <iostream>
using namespace std;

bool checkNum(int input[], int n, int x)
{
    if (n == 0)
    {
        return false;
    }
    if (input[0] == x)
    {
        return true;
    }
    checkNum(input + 1, n - 1, x);
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
    bool output = checkNum(input, n, x);
    if (output)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}