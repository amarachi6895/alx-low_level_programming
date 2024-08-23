#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Double pointer to be set to point to `to`.
 * @to: Pointer to a char to point to.
 */
void set_string(char **s, char *to)
{
    *s = to;
}
