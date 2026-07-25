#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fact(int);
int main()
{
    int n;
    cout << "enter any number";
    cin >> n;
    cout << "The factorial = " << fact(n);
    return 0;
}
int fact(int n)
{
    int res, i;
    res = 1;
    for (i = 1; i <= n; i++)
    {
        res = res * i;
    }
    return (res);
}