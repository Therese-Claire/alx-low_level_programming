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
	int res;

	if (argc - 1 != 2)
	{
		printf("Error\n");

		return(1);
	}
	else
	{
		res = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", res);
	}
	return (0);
}
