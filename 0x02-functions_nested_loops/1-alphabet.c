#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
