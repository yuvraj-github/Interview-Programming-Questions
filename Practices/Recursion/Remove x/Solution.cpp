#include <iostream>
#include <string.h>
using namespace std;

string removeX(string str)
{
    if (str.length() == 0)
    {
        return str;
    }
    if (str[0] == 'x')
    {
        return removeX(str.substr(1));
    }
    else
    {
        return str[0] + removeX(str.substr(1));
    }
}
int main()
{
    string str;
    cin >> str;
    string output = removeX(str);
    cout << output << endl;
}