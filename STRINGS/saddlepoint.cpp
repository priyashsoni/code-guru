#include <iostream>
#include <climits>
using namespace std;
int main()
{

    int i, j, n, max = INT_MIN, max2;
    int arr2d[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "enter the " << i + 1 << " and " << j + 1 << " element of array" << endl;
            cin >> arr2d[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (arr2d[i][j] > max)
                max = arr2d[i][j];
        }
    }
    for (j = 0; j < 3; j++)
    {
        for (i = 0; i < 3; i++)

        {
            if (arr2d[i][j] > max2)
                max2 = arr2d[i][j];
        }
    }
    if (max == max2)
        cout << "saddle point = " << max;
    else
        cout << "no saddle point";
}