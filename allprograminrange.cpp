#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int flag, count, sum, n, m, min, max, fact, dig, sig, sqn, revr, length, copy, i, digit, n1, n2, choice,
        palindrome, perfect, strong, happy, armstrong, automorphic, neon;
    cout << "GOOD MORNING SIR!!\nEnter the range in between you want to check the numbers...\n";
    cin >> n1 >> n2;
    cout << "\nwhich number do you want to check\n\n";
    cout << "ENTER THE NUMBER YOU WANT TO CHECK BETWEEN THE RANGE.\n\npress 1 for armstrong number \npress 2 for automorphic number\npress 3 for happy number\npress 4 for perfect number\npress 5 for neon number\npress 6 for palindrome number\npress 7 for strong number\npress 8 for sad number\n\n";
    cin >> choice;

    if (choice == 1) // armstrong number
    {

        for (n = n1; n <= n2; n++)
        {
            count = n;
            length = 0;
            sum = 0;

            while (count != 0)
            {
                count = count / 10;
                length = length + 1;
            }
            copy = n;
            while (copy != 0)
            {
                digit = copy % 10;
                sum = sum + pow(digit, length);
                copy = copy / 10;
            }
            if (n == sum)
                cout << n << endl;
        }
    }

    if (choice == 2) // automorphic number
    {

        for (n = n1; n <= n2; n = n + 1)
        {
            copy = n;
            sqn = n * n;
            flag = 1;

            while ((copy > 0) && (sqn > 0))
            {
                dig = copy % 10;
                copy = copy / 10;
                sig = sqn % 10;
                sqn = sqn / 10;
                if (dig != sig)
                {
                    flag = 0;
                }
            }

            if (flag == 1)
                cout << n << endl;
        }
    }

    if (choice == 3) // happy number
    {

        for (n = n1; n <= n2; n = n + 1)
        {
            copy = n;
            while (copy != 1 && copy != 4)
            {
                sum = 0;

                while (copy != 0)

                {
                    digit = copy % 10;
                    copy = copy / 10;
                    sqn = digit * digit;
                    sum = sum + sqn;
                }
                copy = sum;
            }
            if (copy == 1)
                cout << n << endl;
        }
    }

    else if (choice == 4) // perfect number
    {

        for (n = n1; n <= n2; n = n + 1)
        {
            copy = n;
            count = 1;
            sum = 0;
            while (count < n)
            {
                if (n % count == 0)
                    sum = sum + count;
                count = count + 1;
            }

            if (sum == n)
                cout << n << endl;
        }
    }

    if (choice == 5) // neon number
    {

        for (n = n1; n <= n2; n = n + 1)
        {
            sqn = n * n;
            copy = n;
            sum = 0;
            while (sqn > 0)
            {
                digit = sqn % 10;
                sqn = sqn / 10;
                sum = sum + digit;
            }
            if (sum == copy)
                cout << n << endl;
        }
    }

    else if (choice == 6) // palindrome number
    {

        for (n = n1; n <= n2; n = n + 1)
        {

            count = n;
            length = 0;
            sum = 0;
            while (count != 0)
            {
                count = count / 10;
                length = length + 1;
            }
            n = copy;
            while (copy != 0)
            {
                digit = copy % 10;
                revr = (digit * pow(10, length - 1));
                sum = sum + revr;
                copy = copy / 10;
            }

            if (n == sum)
                cout << n << endl;
        }
    }
    if (choice == 7) // strong number

    {

        for (n = n1; n <= n2; n = n + 1)
        {
            sum = 0;
            count = n;
            copy = n;
            {
                while (count > 0)
                {
                    digit = count % 10;
                    fact = 1;
                    for (i = 1; i <= digit; i++)
                    {
                        fact = fact * i;
                    }
                    sum = sum + fact;

                    count = count / 10;
                }

                if (copy == sum)
                    cout << n << endl;
            }
        }
    }
    if (choice == 8) // sad number
        for (n = n1; n <= n2; n = n + 1)
        {
            copy = n;
            while (copy != 1 && copy != 4)
            {
                sum = 0;

                while (copy != 0)

                {
                    digit = copy % 10;
                    copy = copy / 10;
                    sqn = digit * digit;
                    sum = sum + sqn;
                }
                copy = sum;
            }
            if (copy == 4)
                cout << n << endl;
        }
    return 0;
}