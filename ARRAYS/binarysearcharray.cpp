#include <iostream>
using namespace std;
int main()
{
    int i, j, n, a, key, low, high, mid;

    printf("enter value of n\n");
    cin >> n;
    int arr[n];

    for (i = 0; i < n; i++)
    {

        cout << "enter the " << i + 1 << " element of array\n";
        cin >> arr[i];
    }
    cout << "enter the key value";
    cin >> key;
    high = n - 1;
    low = 0;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            cout << "search succesful and the key value is found at " << mid << "th index";
            return 0;
        }
        if (arr[mid] > key)
            high = mid - 1;
        else
            low = low + 1;
    }
    cout << "search unsuccessful and element is not found";
    return 0;
}
