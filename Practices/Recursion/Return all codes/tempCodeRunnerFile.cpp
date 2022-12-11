#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

void getAllStringsHelper(string str, vector<string> &ans, string output)
{
    if (str.length() == 0)
    {
        ans.push_back(output);
        return;
    }
    if (str.length() == 1)
    {
        if (str[0] == '0')
        {
            return;
        }
        int number = str[0] - '0';
        char code = 'a' + number - 1;
        ans.push_back(output + code);
        return;
    }
    else
    {
        if (str[0] == '0')
        {
            return;
        }
        int number = str[0] - '0';
        char code = 'a' + number - 1;
        getAllStringsHelper(str.substr(1), ans, output + code);
        string twoDigit = str.substr(0, 2);
        int twoDigitNumb = stoi(twoDigit);
        if (twoDigitNumb <= 26)
        {
            char code = 'a' + twoDigitNumb - 1;
            getAllStringsHelper(str.substr(2), ans, output + code);
        }
    }
}
vector<string> getAllStrings(string &s)
{
    // Write your code here
    vector<string> ans;
    getAllStringsHelper(s, ans, "");
    return ans;
}
int main()
{
    string str;
    cin >> str;
    vector<string> output = getAllStrings(str);
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << endl;
    }
}