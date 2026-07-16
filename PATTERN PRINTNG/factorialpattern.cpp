#include <iostream>
using namespace std;
int main()
{
    int i, j, fact, sum, n;
    cout << "enter a number";
    cin >> n;
    sum = 0;
    fact = 1;

    for (i = 1; i <= n; i++)
    {
        fact = 1;
        for (j = 1; j <= i; j++)
        {
            fact = fact * j;
            cout << j << "x";
        }
        printf("\b");

        cout << "_ _ _" << fact;
        cout << endl;
    }
    return 0;
}