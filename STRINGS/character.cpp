#include <iostream>
using namespace std;
int main()
{
    int n, i, a, e, o, u, vowel, count;
    char name[50];
    cout << "enter your name";
    gets(name);
    i = 0;
    count = 0;
    vowel = 0;
    puts(name);
    while (name[i] != '\0')
    {
        if ((name[i] == 'a') || (name[i] == 'e') || (name[i] == 'i') || (name[i] == 'o') || (name[i] == 'u'))
        {
            vowel++;
        }
        i++;

        count++;
    }

    cout << "\n"
         << vowel;
    cout << "\n"
         << count;
    return 0;
}