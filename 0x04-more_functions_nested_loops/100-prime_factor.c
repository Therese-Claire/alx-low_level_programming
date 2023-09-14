#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a given number.
 * @num: The number to find the largest prime factor for.
 *
 * main - check the code.
 *
 * Return: Always 0.
 */
unsigned long largest_prime_factor(unsigned long num)
{
	unsigned long i;

	while (num % 2 == 0)
	{
		num /= 2;
	}

	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			num /= i;
		}
	}

	if (num > 2)
	{
		return (num);
	}
	else
	{
		return (i - 2);
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long number = 612852475143;
	unsigned long largest_prime = largest_prime_factor(number);

	printf("%lu\n", largest_prime);

	return (0);
}
