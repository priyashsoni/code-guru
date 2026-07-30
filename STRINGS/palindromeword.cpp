#include <iostream>

using namespace std;
int main()
{
    int i, k, flag;
    char name[50];
    cout << "enter your name";
    gets(name);
    i = 0;
    k = 0;
    flag = 1;
    puts(name);
    while (name[i] != '\0')
    {

        i++;
    }
    k = i - 1;

    for (i = 0; i <= k; i++)

    {

        if (name[i] != name[k])
            flag = 0;
        k--;
    }
    if (flag == 1)
        cout << "yes";
    else
        cout << "no";

    return 0;
}
