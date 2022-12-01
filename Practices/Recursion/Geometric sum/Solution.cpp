#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double geometricSum(int k)
{
    if (k == 0)
    {
        return 1;
    }
    double sum = (double)(1 / pow(2, k)) + geometricSum(k - 1);
    return sum;
}
int main()
{
    int k;
    cin >> k;
    cout << geometricSum(k) << endl;
}