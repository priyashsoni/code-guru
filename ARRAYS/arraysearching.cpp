#include <iostream>
using namespace std;
int main()
{
    int n, i, key;
    cout << "enter value of n\n";
    cin >> n;
    cout << "enter the key value to be checked\n";
    cin >> key;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "enter the " << i + 1 << " element of array\n";
        cin >> arr[i];
    }
    if (arr[i] == key)
        cout << "the key value is found at " << i;
    else
        cout << "key value is not available in the array";

    return 0;
}