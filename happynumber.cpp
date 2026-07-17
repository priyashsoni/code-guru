#include <iostream>
using namespace std;
int main()
{
    int sqn, n, digit, sum;
    cout << "enter a value";
    cin >> n;
    sum = 0;

    while (n > 0)
    {
        digit = n % 10;
        n = n / 10;
        sqn = digit * digit;
        sum = sum + sqn;
        if (sum > 9)
            n = sum;
    }
    if (sum == 1)
        cout << "it is a happy number";
    else if (sum == 4)
        cout << "it is a sad number";
    else
        cout << "it is neither happy number nor sad number";
    return 0;
}
