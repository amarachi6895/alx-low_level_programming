#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: the input string to be converted
 *
 * Return: the resulting string with all letters in uppercase
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 'a' - 'A';
		}
		i++;
	}

	return (str);
}
