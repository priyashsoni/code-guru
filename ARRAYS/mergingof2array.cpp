#include <iostream>
using namespace std;
int main()
{
    int i, j, n, k, l, a, m, key, idx, x, y, z, flag;
    cout << "enter size of first array";
    cin >> n;
    cout << "enter size of second array";
    cin >> m;
    k = n + m;
    int alpha[n];
    int beta[m];
    int gamma[k];
    x = 0;
    y = 0;
    z = 0;
    flag = 0;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " value of  first array\n";
        cin >> alpha[i];
    }
    for (i = 0; i < m; i++)
    {
        cout << "Enter the " << i + 1 << " value of second array\n";

        cin >> beta[i];
    }
    while ((z < n) && (x < m) && (y < k))
    {
        if (alpha[z] < beta[x])
        {
            gamma[y] = alpha[z];
            z++;
        }
        else
        {
            gamma[y] = beta[x];
            x++;
        }
        y++;
    }
    while (z < n)
    {
        gamma[y] = alpha[z];
        z++;
        y++;
    }
    while (x < m)
    {
        gamma[y] = beta[x];
        x++;
        y++;
    }

    for (i = 0; i < k; i++)
        cout << gamma[i] << endl;
    return 0;
}