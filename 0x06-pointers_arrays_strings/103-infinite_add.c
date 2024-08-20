#include "main.h"

/**
 * infinite_add - adds two numbers.
 * @n1: first number as a string.
 * @n2: second number as a string.
 * @r: buffer to store the result.
 * @size_r: buffer size.
 *
 * Return: pointer to the result, or 0 if the result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = 0, len2 = 0, carry = 0, i, j, sum;

    while (n1[len1])
        len1++;
    while (n2[len2])
        len2++;

    if (size_r <= (len1 > len2 ? len1 : len2) + 1)
        return (0);

    r[size_r - 1] = '\0';
    i = len1 - 1;
    j = len2 - 1;
    size_r--;

    while (i >= 0 || j >= 0 || carry)
    {
        sum = carry;
        if (i >= 0)
            sum += n1[i--] - '0';
        if (j >= 0)
            sum += n2[j--] - '0';

        if (size_r <= 0)
            return (0);

        r[--size_r] = (sum % 10) + '0';
        carry = sum / 10;
    }

    if (size_r > 0)
        return (r + size_r);

    return (r);
}
