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
            if ((i == 1) || (i == n) || (j == 1) || (j == n) || (i + j == n + 1) && (i != j) || (i == j) && (i != (n + 1) / 2) && (j != (n + 1) / 2) || (i == j) && (i == (n + 1) / 2) && (j == (n + 1) / 2) || (j == mid) || (i + j == n + 1) || ((i > j) && (i < mid) || ((j > i) && (j < mid))))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}