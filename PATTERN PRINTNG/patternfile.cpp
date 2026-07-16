#include <iostream>
using namespace std;
int main()
{
    int n, x, i, j, k, mid;

    cout << "enter a value";
    cin >> n;
    if (n % 2 == 0)
        n = n + 1;
    else
        n = n;
    mid = (n + 1) / 2;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if ((i == n) || (j == n) || (i == 1) || (j == 1) ||
                (i == mid) || (j == mid) || (i + j == mid + 1) || (i + j == n + mid) || (j - i == mid - 1) || (i - j == mid - 1))
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }
    return 0;
}
