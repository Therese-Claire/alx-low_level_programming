#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - The main function
 * Description : This function add positive numbers only
 *
 * @argc : argument count
 * @argv : argument vector which points to the array of string of arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int j;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		if (atoi(argv[i]) < 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
