#include <iostream>
#include <string>
using namespace std;

void printPermutationsHelper(string str, string ans)
{
    if (str.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        string leftPart = str.substr(0, i);
        string rightPart = str.substr(i + 1);
        string resultStr = leftPart + rightPart;
        printPermutationsHelper(resultStr, ans + ch);
    }
}
void printPermutations(string str)
{
    printPermutationsHelper(str, "");
}
int main()
{
    string input;
    cin >> input;
    printPermutations(input);
    return 0;
}