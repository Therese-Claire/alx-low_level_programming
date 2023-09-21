#include "main.h"

/**
 * _strcmp - Function compares 2 strings.
 * @s1 : Points to the first string.
 * @s2 : Points to the second string.
 *
 * Return: s1[i] - s2[i].
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != 0))
		i++;

	return ((int)s1[i] - (int)s2[i]);
}
