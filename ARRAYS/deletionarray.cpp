#include <iostream>
using namespace std;
int main()
{
    int i, j, n, a, key, low, high, mid, flag;

    printf("enter value of n\n");
    cin >> n;
    int arr[n];
    int idx;
    flag = 0;

    for (i = 0; i < n; i++)
    {

        cout << "enter the " << i + 1 << " element of array\n";
        cin >> arr[i];
    }

    cout << "enter the key value\n";
    cin >> key;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            idx = i;
        }
    }

    for (i = idx; i <= n; i++)
    {
        arr[i] = arr[i + 1];
    }

    for (i = 0; i < n - 1; i++)
    {
        cout << "\n"
             << arr[i];
        }
    return 0;
}
