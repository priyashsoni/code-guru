#include <iostream>
#include <utility>
using namespace std;
int main()
{
    int i, j, n, k, l, a, m, key, idx, x, y, z, flag;
    cout << "enter size of first array";
    cin >> n;
    cout << "enter size of second array";
    cin >> m;
    k = n + m - 1;
    int alpha[k];

    int beta[m];

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
    i = n - 1;
    j = m - 1;
    while ((i >= 0) && (j >= 0))
    {
        if (alpha[i] > beta[j])
        {
            alpha[k] = alpha[i];
            i--;
        }
        else
        {
            alpha[k] = beta[j];
            j--;
        }
        k--;
    }
    for (i = 0; i < k; i++)
        cout << alpha[i];
    return 0;
}