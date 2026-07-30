#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int prime(int);
int main()
{
    int n, flag;
    flag = 1;
    cout << "enter a number";
    cin >> n;
    prime(n);
    if (prime(n) == 1)
        cout << "the number is prime";
    else
        cout << "the number is not prime";

    return 0;
}
int prime(int x)
{
    int flag, i;
    flag = 1;
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
            flag = 0;
    }
    return (flag);
}
