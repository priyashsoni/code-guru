#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, y, x, count, j;
    float i, sum;
    cout << "enter value of n";
    cin >> n;
    cout << "enter value of x";
    cin >> x;

    sum = 1;

    for (y = 2; y <= n; y++)
    {
        count = 2;
        i = pow(x, y) / y;

        if (count % 2 == 0)
        {
            sum = sum + i;
            count++;
        }
        else
        {
            sum = sum - i;
            count++;
        }
    }

    cout << sum;
    return 0;
}