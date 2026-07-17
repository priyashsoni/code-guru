#include <iostream>
using namespace std;
int main()
{
    int count, digit, fact, sum, n, copy;
    cout << "enter a value";
    cin >> n;
    copy = n;
    sum = 0;
    while (digit > 0)
    {
        digit = n % 10;
        fact = 1;
        for (count = 1; count <= digit; count++)
            fact = fact * count;
        sum = sum + fact;

        n = n / 10;
    }