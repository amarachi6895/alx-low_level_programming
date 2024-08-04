#include <unistd.h> /* Include the unistd.h header for the write function */

/* prototype declaration for _putchar */
int _putchar(char c);

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char *str = "_putchar";
int i;

for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');

return (0);
}
