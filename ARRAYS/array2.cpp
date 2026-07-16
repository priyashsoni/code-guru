#include <iostream> //reverse array
using namespace std;
int main()
{
    int n, i;
    cout << "enter value of n\n";
    cin >> n;
    int arr[n];
    for (i = n; i > 0; i--)
    {
        cout << "enter the " << i - 1 << " element of array\n";
        cin >> arr[i];
    }
    return 0;
}