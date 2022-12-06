#include <iostream>
#include <string.h>
using namespace std;

string removeDuplicates(string str)
{
    if (str.length() == 0)
    {
        return str;
    }
    if (str[0] == str[1])
    {
        string smallAns = removeDuplicates(str.substr(2));
        return str[0] + smallAns;
    }
    else
    {
        return str[0] + removeDuplicates(str.substr(1));
    }
}
int main()
{
    string str;
    cin >> str;
    string output = removeDuplicates(str);
    cout << output << endl;
}