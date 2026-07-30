#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int power(int, int);
int main()
{
    int n1, n2;
    cout << "enter two values";
    cin >> n1 >> n2;
    cout << n1 << " raise to the power " << n2 << " is " << power(n1, n2);
}
int power(int n1, int n2)
{
    int i, res;
    res = 1;

    for (i = 1; i <= n2; i++)
    {
        res = n1 * res;
        }
    return (res);
}