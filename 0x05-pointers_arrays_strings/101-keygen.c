#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random password.
 * Return: Always 0 (Success)
 */
int main(void)
{
    int pass[100]; /* Array to hold random values */
    int i, sum, n;

    sum = 0;

    srand(time(NULL));

    /* Generate the password */
    for (i = 0; i < 99; i++)
    {
        pass[i] = rand() % 78;
        sum += (pass[i] + '0');
        putchar(pass[i] + '0');

        if ((2772 - sum) - '0' < 78)
        {
            n = 2772 - sum - '0';
            sum += n;
            putchar(n + '0');
            break;
        }
    }
    putchar('\n');

    return (0);
}
