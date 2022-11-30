#include <iostream>
using namespace std;

int allIndices(int input[], int n, int x, int output[])
{
    if (n == 0)
    {
        return 0;
    }
    int smallAns = allIndices(input, n - 1, x, output);
    if (input[n - 1] == x)
    {
        output[smallAns++] = n - 1;
    }
    return smallAns;
}
int main()
{
    int n, x;
    cin >> n;
    int input[n], output[n];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    cin >> x;
    int size = allIndices(input, n, x, output);
    for (int i = 0; i < size; i++)
    {
        cout << output[i] << " ";
    }
}