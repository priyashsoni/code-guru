#include <iostream>
using namespace std;
struct student
{
    char name[30];
    int m1, m2, m3;
    float per;
};
int main()
{

    struct student s1, s2, s3;
    cout << "enter name";
    gets(s1.name);
    cin >> s1.m1 >> s1.m2 >> s1.m3;
    s1.per = (s1.m1 + s1.m2 + s1.m3) / 3;
    cout << "percentage= " << s1.per << "%" << endl;
}