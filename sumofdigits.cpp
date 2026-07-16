#include <iostream>
using namespace std;
int main()
{
    int sum, digit, n;
    cout << "enter a value";
    cin >> n;
    sum = 0;

    while (digit > 0)
    {
        digit = n % 10;

        sum = sum + digit;
        n = n / 10;
    }

    cout << sum;

    return 0;
}