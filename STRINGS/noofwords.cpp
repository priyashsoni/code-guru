#include <iostream>
using namespace std;
int main()
{
    int n, i, j, k, count;
    char word[900];
    cout << "enter the sentense";
    gets(word);
    i = 0;
    k = 1;
    while (word[i] != '\0')
    {
        i++;
        if ((word[i] == ' ') && (word[i - 1] != ' '))
            k++;
    }
    cout << k;
    return 0;
}