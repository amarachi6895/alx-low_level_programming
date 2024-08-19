#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string to be encoded
 *
 * Return: The pointer to the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char leet_map[5][2] = {
		{'a', '4'}, {'e', '3'},
		{'o', '0'}, {'t', '7'}, {'l', '1'}
	};

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == leet_map[j][0] || str[i] == leet_map[j][0] - 32)
			{
				str[i] = leet_map[j][1];
			}
		}
		i++;
	}

	return (str);
}
