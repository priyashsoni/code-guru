#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, x, i, j, k, l, dig, length, digit, copy, revr, sum;
    cout << "enter a number";
    cin >> n;
    length = 0;
    sum = 0;
    for (x = 1; x <= n; x++)
    {
        for (i = n; i >= x; i--)
        {
            cout << i;

            for (j = n - 2; j >= 0; j--)
                cout << " ";
            while (n != 0)
            {
                n = n / 10;
                length = length + 1;
            }
            while (i != 0)
            {
                digit = i % 10;
                i = i / 10;
                revr = (digit * pow(10, length - 1));
                sum = sum + revr;
                i = i / 10;
                cout << revr;
                cout << endl;
            }
        }
    }
    return 0;
}
