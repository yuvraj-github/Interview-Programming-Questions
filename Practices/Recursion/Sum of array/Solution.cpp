#include <iostream>
using namespace std;

int sumOfArray(int input[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    return input[0] + sumOfArray(input + 1, n - 1);
}

int main()
{
    int n;
    cin >> n;
    int input[n];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    int output = sumOfArray(input, n);
    cout << output << endl;
}