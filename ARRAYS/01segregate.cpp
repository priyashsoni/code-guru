#include <iostream>
using namespace std;
int main()
{
    int i, j, n, m;
    cout << "enter size of array";
    cin >> n;

    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " value of array\n";
        cin >> arr[i];
    }

    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] == 1)
        {

            j = arr[i + 1];
            arr[i] = arr[i + 1];
            arr[i + 1] = j;
        }
    }
    for (i = 0; i < n; i++)
        cout << "\n"
             << arr[i];
    return 0;
}
