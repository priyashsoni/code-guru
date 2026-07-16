#include <iostream>
using namespace std;
int main()
{
    int n, m, count, prime, i;
    cout << "enter values of m and n\n";
    cin >> m >> n;
    count = m;
    i = 1;
    while (count <= n)
    {

        while (i < n)

            if (count % i != 0)

                cout << i;
    }
    return 0;
}