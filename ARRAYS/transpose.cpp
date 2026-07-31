#include <iostream>
#include <bits/stdc++.h>
#include <climits>
#include <utility>
using namespace std;
int main()
{
    int i, j, n1, n2, max = INT_MIN, x;
    cout << "enter grid of matrix";
    cin >> n1 >> n2;
    int arr2d[n1][n2];
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            cout << "enter the " << i + 1 << " and " << j + 1 << " element of array" << endl;
            cin >> arr2d[i][j];
        }
    }
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            if (i < j)
                swap(arr2d[i][j], arr2d[j][i]);
        }
    }
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            cout << arr2d[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}