#include <iostream>
#include <utility>
using namespace std;
int main()
{
    int i, j, n, a, key;

    printf("enter value of n\n");
    cin >> n;
    int arr[n];

    for (i = 0; i < n; i++)
    {

        {
            cout << "enter the " << i + 1 << " element of array\n";
            cin >> arr[i];
        }
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)

            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);

        cout << "\n"
             << arr[i];
    }
    cout << endl;

    return 0;
}
