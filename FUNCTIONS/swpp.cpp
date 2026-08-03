#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void swp(int, int);
int main()
{
    int n1, n2;
    int *ip1;
    int *ip2;
    cout << "enter two numbers";
    cin >> n1 >> n2;
    ip1 = &n1;
    ip2 = &n2;
    swp(n1, n2);
    cout << "after swapping" << *ip1 << endl
         << *ip2;
    return 0;
}
void swp(int *ip1, int *ip2)
{

    int i;
    i = *ip2;
    *ip1 = *ip2;
    *ip2 = i;
}