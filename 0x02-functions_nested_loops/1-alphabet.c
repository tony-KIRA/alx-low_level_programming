#include "main.h"

/**
 * print alphabets in lower case followed by a new line. 
 * Return: 0 success
 */

void print_alphabet(void)
{
	char h;

	for (h = 'a'; h <= 'z'; h++)
	{
		_putchar(h);
	}
	_putchar('\n');
}

