#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generate_password - Generates a random password.
 * Return: void
 */
void generate_password(void)
{
	/* Length of the password */
	int length = 6;
	/* Array of characters that can be used in the password */
	char chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	int chars_len = sizeof(chars) - 1;
	/* Seed the random number generator */
	srand(time(NULL));

	/* Generate the password */
	for (int i = 0; i < length; i++) 
	{
	putchar(chars[rand() % chars_len]);
	}
	putchar('\n');
}

int main(void)
{
	generate_password();
	return 0;
}
