#include <iostream>
using namespace std;
int main()
{
    int a, b, siz;
    int *ip;
    int *ip2;
    cout << "enter value of a ";

    cin >> a;
    ip = &a;
    siz = sizeof(a);
    cout << *ip << endl
         << siz << "bytes";
}