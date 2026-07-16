#include <iostream>
using namespace std;
int main()
{
    int x, i, n;
    cout << "enter a number";
    cin >> n;
    for (x = 1; x <= n; x++)
    {
        for (i = n; i >= x; i--)

            cout << i;

        cout << endl;
    }

    return 0;
}