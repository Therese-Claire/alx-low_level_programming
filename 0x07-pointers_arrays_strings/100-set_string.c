#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char.
 * @s : Points to the pointer string
 * @to : Points to a string.
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
