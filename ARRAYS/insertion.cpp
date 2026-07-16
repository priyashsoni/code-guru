// insertion and deletion in sorted array
#include <iostream>
using namespace std;
int main()
{
    int i, j, n, a, key, low, high, mid;

    printf("enter value of n\n");
    cin >> n;
    int arr[n + 1];
    int idx;

    for (i = 0; i < n; i++)
    {

        cout << "enter the " << i + 1 << " element of array\n";
        cin >> arr[i];
    }

    cout << "enter the key value\n";
    cin >> key;

    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] > key)
        {
            idx = i;
        }
    }

    for (i = n; i > idx; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[idx] = key;
    for (i = 0; i <= n; i++)
    {
        cout << arr[i] << "\n";
    }
    return 0;
}
