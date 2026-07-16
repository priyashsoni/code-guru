#include <iostream> //sum and average
using namespace std;
int main()
{
    int n, i;
    float average, sum;
    cout << "enter value of n\n";
    cin >> n;
    int arr[n];
    sum = 0;
    for (i = 0; i < n; i++)
    {
        cout << "enter the " << i + 1 << " element of array\n";
        cin >> arr[i];
        sum = sum + arr[i];
    }
    average = sum / n;
    cout << "the sum of arrays is " << sum;
    cout << endl;
    cout << "the average of arrays is " << average;
    return 0;
}
