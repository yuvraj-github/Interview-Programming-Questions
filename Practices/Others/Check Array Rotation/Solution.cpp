#include <iostream>
using namespace std;

int arrayRotateCheck(int *input, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (input[i] > input[i + 1])
        {
            return i + 1;
        }
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    int *input = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    cout << arrayRotateCheck(input, n) << endl;
}