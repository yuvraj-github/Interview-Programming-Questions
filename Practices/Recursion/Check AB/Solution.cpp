#include <iostream>
#include <string.h>
using namespace std;

bool checkAB(string str)
{
    if (str.length() == 0)
    {
        return true;
    }
    if (str[0] != 'a')
    {
        return false;
    }
    if (str[1] == 'b' && str[2] == 'b')
    {
        return checkAB(str.substr(3));
    }
    return checkAB(str.substr(1));
}
int main()
{
    string str;
    cin >> str;
    bool ans = checkAB(str);
    if (ans)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}