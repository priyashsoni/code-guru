#include <iostream>
using namespace std;
int main()
{
    int x, i, j, k, n, mid;
    cout << "enter a number";
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

            if ((i < mid && j == 1) || (i == mid) || (j == mid) || (i == 1 && j > mid) || (j == n && i > mid) || (i == n && j < mid))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}