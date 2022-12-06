#include <iostream>
using namespace std;

void removeDuplicates(char input[])
{
    if (input[0] == '\0')
    {
        return;
    }
    if (input[0] == input[1])
    {
        int i = 0;
        while (input[i] != '\0')
        {
            input[i] = input[i + 1];
            i++;
        }
        removeDuplicates(input);
    }
    removeDuplicates(input + 1);
}
int main()
{
    char input[100000];
    cin >> input;
    removeDuplicates(input);
    cout << input << endl;
}