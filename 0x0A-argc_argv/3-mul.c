#include <stdlib.h>
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
	int num1, num2;
	int res;

	if (argc != 3)
	{
		printf("Error\n");

		return(1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	res = num1 * num2;
	printf("%d\n", res);

	return (0);
}
