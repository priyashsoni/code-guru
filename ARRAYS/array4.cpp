#include <iostream>
using namespace std;
int main()
{
    int n, i, max;
    cout << "enter value of n\n";
    cin >> n;
    max = 0;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "enter the " << i + 1 << " element of array\n";
        cin >> arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    cout << "maximum value of the array is " << max;
    return 0;
}