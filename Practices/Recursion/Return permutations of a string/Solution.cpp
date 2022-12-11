#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void generatePermutationsHelper(string &str, vector<string> &ans, string output)
{
    if (str.length() == 0)
    {
         ans.push_back(output);
        // if (std::find(ans.begin(), ans.end(), output) == ans.end()) // check output exists in the vector.
        // {
        //     //output not exists.
        //    ans.push_back(output);
        // }
        return;
    }
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        string leftPart = str.substr(0, i);
        string rightPart = str.substr(i + 1);
        string resultStr = leftPart + rightPart;
        generatePermutationsHelper(resultStr, ans, output + ch);
    }
}
vector<string> generatePermutations(string &str)
{
    // write your code here
    vector<string> ans;
    generatePermutationsHelper(str, ans, "");
    sort(ans.begin(), ans.end());
    return ans;
}
int main()
{
    string str;
    cin >> str;
    vector<string> output = generatePermutations(str);
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}