#include <iostream>
using namespace std;

int findDuplicate(int *arr, int n)
{
    // Write your code here
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }    
    for (int i = 1; i < n; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}
int main()
{

    int size;
    cin >> size;
    int *input = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }

    cout << findDuplicate(input, size) << endl;

    return 0;
}