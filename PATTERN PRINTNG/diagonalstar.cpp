#include <iostream>
using namespace std;
int main()
{
    int i, j, k, n;
    cout << "enter a number\n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {

            {

                if ((i == 1) || (i == n) || (j == 1) || (j == n) || (i + j == n + 1) && (i != j) || (i == j) && (i != (n + 1) / 2) && (j != (n + 1) / 2))
                    cout << "*";
                else if ((i == j) && (i == (n + 1) / 2) && (j == (n + 1) / 2))
                    cout << "@";
                else
                    cout << " ";
            }

            cout << endl;
        }
    }
    return 0;
}
