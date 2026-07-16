#include <iostream>
using namespace std;
int main()
{
    int sqn, n, sum, digit, copy;
    cout << "enter a number\n";
    cin >> n;
    sqn = n * n;
    copy = n;
    sum = 0;

    while (digit > 0)
    {
        digit = sqn % 10;
        sqn = sqn / 10;
        sum = sum + digit;
    }
    if (sum == copy)
        cout << "it is an neon number";
    else
        cout << "it is not an neon number";

    return 0;
}