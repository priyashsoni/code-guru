#include <iostream>
using namespace std;
int main()
{
    int x, n, i, sum, count, copy;
    sum = 0;
    count = 0;
    cout << "enter n" << endl;
    cin >> n;
    copy = n;
    while (n > 0)
    {
        i = n % 10;
        n = n / 10;
        if (copy % i == 0)
            sum = sum + i;
    }
    if (sum % 2 == 0)
        cout << "even";
    else
        cout << "odd";
    return 0;
}