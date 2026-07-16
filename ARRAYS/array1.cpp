#include <iostream> //reverse array
using namespace std;
int main()
{
    int n, i;
    cout << "enter value of n\n";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "enter the " << i + 1 << " element of array\n";
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
        cout << arr[i] << endl;
    return 0;
}