#include <iostream>
using namespace std;
int main()
{
    int *ip1;
    int n, i, m;
    cout << "enter the numbers you wanna insert";
    cin >> n;
    ip1 = (int *)malloc(n * sizeof(int));
    for (i = 1; i <= n; i++)
    {
        cin >> *ip1;
        ip1++;
    }
    ip1 = ip1 - n;
    for (i = 1; i <= n; i++)
    {
        cout << *ip1 << " ";
        ip1++;
    }
    cout << "enter how many numbers you want to add in it";
    cin >> m;
    ip1 = ip1 - n;
    ip1 = (int *)realloc(ip1, (m + n) * sizeof(int));
    ip1 = ip1 + n;
    for (i = 1; i <= m; i++)
    {
        cin >> *ip1;
        ip1++;
    }
    ip1 = ip1 - (n + m);
    for (i = 1; i <= n + m; i++)
    {
        cout << *ip1;
        ip1++;
    }

    return 0;
}