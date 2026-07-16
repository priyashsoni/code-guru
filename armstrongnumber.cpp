#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, count, digit, sum, length, copy, copy2;
    cout << "enter a number";
    cin >> n;
    copy = n;
    length = 0;
    sum = 0;
    while (n != 0)
    {
        n = n / 10;
        length = length + 1;
    }
    n = copy;
    while (copy != 0)
    {
        digit = copy % 10;

        sum = sum + pow(digit, length);
        copy = copy / 10;
    }

    if (n == sum)
        cout << "yes it is an armstrong number";
    else
        cout << "it is not an armstrong number";
    return 0;
}