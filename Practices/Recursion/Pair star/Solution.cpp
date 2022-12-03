#include <iostream>
#include <string.h>
using namespace std;

void pairStar(string input, string &output, int i)
{
    output = output + input[i];
    if (i == input.length() - 1)
    {
        return;
    }
    if (input[i] == input[i + 1])
    {
        output = output + "*";
    }
    pairStar(input, output, i + 1);
}
int main()
{
    string input, output = "";
    cin >> input;
    int len = input.length();
    pairStar(input, output, 0);
    cout << output << endl;
}