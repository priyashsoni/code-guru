#include <iostream>
#include <utility> //second largest
using namespace std;
int main()
{
    int n, i, j, max;
    cout << "enter value of n\n";
    cin >> n;
    max = 0;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "enter the " << i + 1 << " element of array\n";
        cin >> arr[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)

            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
    }
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    cout << "the second largest value is " << max;

    return 0;
}