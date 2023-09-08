#include  <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char ch;

	num = 0;
	while (num < 10)
	{
		putchar('0' + num);
		num = num + 1;
	}
	ch = 'a';
	while (ch <= 'f')
	{
		putchar(ch);
		ch = ch + 1;
	}

	putchar('\n');

	return (0);
}
