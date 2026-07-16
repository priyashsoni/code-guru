#include <iostream>
using namespace std;
int main()
{
    int i, j, n, k, l, a, m, key, idx;
    cout << "enter size of first array";
    cin >> n;
    cout << "enter size of second array";
    cin >> m;

    int alpha[n];
    int beta[m];
    for (i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " value of  first array\n";
        cin >> alpha[n];
    }
    for (i = 0; i < m; i++)
    {
        cout << "Enter the " << i + 1 << " value of second array\n";

        cin >> beta[m];
    }
    cout << "enter key value";
    cin >> key;
    if (key == alpha[i])
    {
        for (i = 0; i < n; i++)
        {

            idx = i;
        }
        for (i = idx; i <= n; i++)
        {
            alpha[i] = alpha[i + 1];
        }
        cout << "key value is present in first array";
    }
    for (i = 0; i < n - 1; i++)
    {
        cout << "\n"
             << alpha[i];
    }
    if (key == beta[i])
    {
        for (i = 0; i < n; i++)

        {
            idx = i;
        }
        for (i = idx; i <= n; i++)
        {
            beta[i] = beta[i + 1];
        }
        cout << "key value is present in second array";
    }
    for (i = 0; i < m - 1; i++)
    {
        cout << "\n"
             << beta[i];
    }
    return 0;
}
