#include <iostream>
#include <cstring>
using namespace std;

int getPossibleCounts(string input)
{
    int n = input.size();
    int count[n + 1];
    count[0] = 1;
    count[1] = 1;
    if (input[0] == '0')
    {
        return 0;
    }
    for (int i = 2; i <= n; i++)
    {
        count[i] = 0;
        if (input[i - 1] > '0')
        {
            count[i] = count[i - 1];
        }
        if (input[i - 2] == '1' || (input[i - 2] == '2' && input[i - 1] <= '6'))
        {
            count[i] += count[i - 2];
        }
    }
    return count[n];
}
int main()
{
    string input;
    cin >> input;
    int output = getPossibleCounts(input);
    cout << output << endl;
}
