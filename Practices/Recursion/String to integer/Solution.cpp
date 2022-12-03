#include <iostream>
#include <string.h>
using namespace std;

int stringToIntegerHelper(string str, int n)
{
    if (n == 0)
    {
        return str[n] - '0';
    }
    int smallAns = stringToIntegerHelper(str, n - 1);
    int last = str[n] - '0';
    return smallAns*10+last;
}
int stringToInteger(string str)
{
    int len = str.length();
    return stringToIntegerHelper(str, len - 1);
}
int main()
{
    string str;
    cin >> str;
    int output = stringToInteger(str);
    cout << output << endl;
}