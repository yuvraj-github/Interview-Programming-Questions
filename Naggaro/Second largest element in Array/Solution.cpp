#include <iostream>
using namespace std;

int secondLargestNumber(int input[], int n)
{
    if (n == 0 || n == 1)
    {
        return -1;
    }
    int max = 0;
    int secondMax = 0;
    for (int i = 0; i < n; i++)
    {
        if (input[i] > max)
        {
            int temp = max;
            max = input[i];
            secondMax = temp;
        }
        if (input[i] > secondMax && input[i] != max)
        {
            secondMax = input[i];
        }
    }
    if (secondMax == 0)
    {
        return -1;
    }
    return secondMax;
}
int main()
{
    int input[] = {2, 2, 1};
    int n = sizeof(input) / sizeof(input[0]);
    int output = secondLargestNumber(input, n);
    cout << output << endl;
}