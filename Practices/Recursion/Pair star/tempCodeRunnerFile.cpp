#include <iostream>
using namespace std;

string pairStar(string str)
{
    if (str.length() == 0)
    {
        return str;
    }
    if (str[0] == str[1])
    {
        string smallAns = pairStar(str.substr(1));
        return str[0] + "*" + smallAns;
    }
    else
    {
        string smallAns = pairStar(str.substr(1));
        return str[0] + smallAns;
    }
}
int main()
{
    string str;
    cin >> str;
    string output = pairStar(str);
    cout << output << endl;
}