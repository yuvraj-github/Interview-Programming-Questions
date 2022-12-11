#include <iostream>
#include <string.h>
using namespace std;

void printCodes(string str, string output)
{
    if (str.length() == 0)
    {
        cout << output << endl;
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
        cout << output + code << endl;
    }
    else
    {
        if (str[0] == '0')
        {
            return;
        }
        int number = str[0] - '0';
        char code = 'a' + number - 1;
        printCodes(str.substr(1), output + code);

        string twoDigit = str.substr(0, 2);
        int twoDigitNumb = stoi(twoDigit);
        if (twoDigitNumb <= 26)
        {
            char code = 'a' + twoDigitNumb - 1;
            printCodes(str.substr(2), output + code);
        }
    }
}
int main()
{
    string str;
    cin >> str;
    printCodes(str, "");
}