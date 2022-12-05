#include <iostream>
using namespace std;

void towerOfHanoi(int n, char s, char h, char d)
{
    if (n == 0)
    {
        return;
    }
    if (n == 1)
    {
        cout << s << " " << d << endl;
    }
    towerOfHanoi(n - 1, s, d, h);
    cout << s << " " << d << endl;
    towerOfHanoi(n - 1, h, d, s);
}
int main()
{
    int n;
    cin >> n;
    towerOfHanoi(n, 'a', 'b', 'c');
}