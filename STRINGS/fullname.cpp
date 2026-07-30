#include <iostream>
using namespace std;
int main()
{
    char firstname[10];
    char lastname[10];
    char fullname[30];
    int n, i, j, k, first, last, x;
    cout << "enter your first name";
    gets(firstname);
    cout << "enter last name";
    gets(lastname);

    k = 0;
    puts(firstname);
    for (i = 0; firstname[i] != '\0'; i++)
    {
        fullname[k] = firstname[i];
        k++;
    }
    if (firstname[i] == '\0')
        fullname[k] = ' ';
    k = k + 1;
    puts(lastname);
    for (j = 0; lastname[j] != '\0'; j++)
    {

        fullname[k] = lastname[j];
        k++;
    }
    if (lastname[j] == '\0')
        fullname[k + 1] = '\0';
    puts(fullname);
}