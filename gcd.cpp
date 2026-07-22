#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int gcd(int, int);
int main()
{
    int n1, n2, max, min, count;
    cout << "enter two numbers";
    cin >> n1 >> n2;
    cout << "the greatest common divisor of the numbers is " << gcd(n1, n2);
    return 0;
}

int gcd(int n)
{
    int gcd = 1;

    int count, n1, n2, max, min;
    count = 1;
    if (n1 > n2)
    {
        max = n1;
        min = n2;
    }
    else
    {
        min = n1;
        max = n2;
    }
    while (count <= min)
    {
        if ((max % count == 0) && (min % count == 0))
            gcd = count;
        count = count + 1;
    }
    return (gcd);
}