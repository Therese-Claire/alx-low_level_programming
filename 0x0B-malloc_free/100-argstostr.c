#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - function that concatenates all the arguments of your program
 * @ac : number of arguments in the program
 * @av : an array of the arguments in the program
 *
 * Return: NULL if ac or av is 0, or return pointer to new string.
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	size_t size;
	int i, j, k;

	size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		size += strlen(av[i]);
	}

	size += ac - 1;

	ptr = malloc(sizeof(char) * (size + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k++] = av[i][j];
		}
		if (i < ac - 1)
		{
			ptr[k++] = ' ';
		}
	}
	ptr[k] = '\0';

	return (ptr);
}
