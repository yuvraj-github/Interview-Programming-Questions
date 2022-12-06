#include <iostream>
#include <string.h>
using namespace std;

string replaceCharacter(string str, char c1, char c2)
{
    if (str.length() == 0)
    {
        return;
    }
    if (str[0] == c1)
    {
        str[0] = c2;
    }
    replaceCharacter(str.substr(1), c1, c2);
}
int main()
{
    string str;
    char c1, c2;
    cin >> str;
    cin >> c1 >> c2;
    string output = replaceCharacter(str, c1, c2);
    cout << output << endl;
}