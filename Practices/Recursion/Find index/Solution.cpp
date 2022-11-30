#include <iostream>
using namespace std;

int findIndex(int input[], int n, int x, int index)
{
    if (n == 0)
    {
        return -1;
    }
    if (input[0] == x)
    {
        return index;
    }
    findIndex(input + 1, n - 1, x, ++index);
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
    int output = findIndex(input, n, x, 0);
    cout << output << endl;
}