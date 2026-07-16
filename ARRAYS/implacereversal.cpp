#include <iostream>
// array ko revrse krna hai!!
using namespace std;
int main()
{
    int n, i, j, zee, mid, a;
    cout << "enter value of n\n";
    cin >> n;
    int arr[n];
    if (n % 2 != 0)
        mid = (n / 2) - (1 / 2);
    else
        mid = n / 2;
    for (i = 0; i < n; i++)
    {
        cout << "enter the " << i + 1 << " element of array\n";
        cin >> arr[i];
    }
    for (zee = 0; zee <= mid; zee++)
    {
        a = arr[zee];
        arr[zee] = arr[n - 1 - zee];
        arr[n - 1 - zee] = a;
    }
    for (i = 0; i < n; i++)
        cout << "\n"
             << arr[i];

    return 0;
}
