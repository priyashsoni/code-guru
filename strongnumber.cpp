#include <iostream>
using namespace std;
int main()
{
    int count, digit, fact, sum, n, copy;
    cout << "enter a value";
    cin >> n;
    copy = n;
    sum = 0;
    while (n > 0)
    {
        digit = n % 10;
        fact = 1;
        for (count = 1; count <= digit; count++)
        {
            fact = fact * count;
        }
        sum = sum + fact;

        n = n / 10;
    }

    if (copy == sum)
        cout << "it is an strong number";
    else
        cout << "it is not an strong number";

    return 0;
}
