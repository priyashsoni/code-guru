#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, length, digit, revr, copy, sum;
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
    while (digit != 0)
    {
        digit = copy % 10;
        revr = (digit * pow(10, length - 1));
        sum = sum + revr;
        copy = copy / 10;
    }
    n = copy;
    if (n == revr)
        cout << "yes it's an palindrome number";
    else
        cout << "it's not an palindrome number";

    return 0;
}