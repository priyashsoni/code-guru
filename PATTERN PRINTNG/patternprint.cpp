#include <iostream>
using namespace std;
int main()
{
    int n, j, i;
    cout << "enter a number\n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}