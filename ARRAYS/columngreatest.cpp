#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int i, j, n, max = INT_MIN;
    int arr2d[5][3];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "enter the " << i + 1 << " and " << j + 1 << " element of array" << endl;
            cin >> arr2d[i][j];
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << arr2d[i][j] << " ";
        }
        cout << endl;
    }
    for (j = 0; j < 3; j++)
    {
        for (i = 0; i < 5; i++)

        {
            if (arr2d[i][j] > max)
                max = arr2d[i][j];
        }
        cout << endl
             << max << " ";
        max = INT_MIN;
    }

    return 0;
}