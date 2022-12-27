#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isSubSequence(string large, string small)
{    
    if (small.length() == 0)
    {
        return true;
    }
    if (large.length() == 0)
    {
        return false;
    }
    if (large[0] == small[0])
    {
        return isSubSequence(large.substr(1), small.substr(1));
    }
    else
    {
        return isSubSequence(large.substr(1), small);
    }
}
int main()
{
    string large, small;
    cin >> large;
    cin >> small;
    bool output = isSubSequence(large, small);
    if(output) {
        cout<<"true"<<endl;
    } else {
        cout<<"false"<<endl;
    }
}