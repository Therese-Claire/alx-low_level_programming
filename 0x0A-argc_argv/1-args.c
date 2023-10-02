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
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
