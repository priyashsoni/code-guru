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
int fact(int x)
{
    int res, i;
    res = 1;
    for (i = 1; i <= x; i++)
    {
        res = res * i;
    }
    return (res);
}