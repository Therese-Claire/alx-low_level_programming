#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	char chU;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch = ch + 1;
	}
	chU = 'A';
	while (chU <= 'Z')
	{
		putchar(chU);
		chU = chU + 1;
	}

	putchar('\n');

	return (0);
}
