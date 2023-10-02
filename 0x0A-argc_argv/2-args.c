#include <stdio.h>

/**
 * main - The main function
 * @argc : argument count
 * @argv : argument vector which points to the array of
 * string of arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
