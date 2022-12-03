#include <iostream>
#include <string.h>
using namespace std;

string replacePi(string str)
{
    if (str.length() == 0 || str.length() == 1)
    {
        return str;
    }
    if (str[0] == 'p' && str[1] == 'i')
    {
        string smallAns = replacePi(str.substr(2));
        return "3.14" + smallAns;
    }
    else
    {
        return str[0] + replacePi(str.substr(1));
    }
}
int main()
{
    string str;
    cin >> str;
    string output = replacePi(str);
    cout << output << endl;
}