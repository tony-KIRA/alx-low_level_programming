#include <stdio.h>

/**
 * main - print alphabet expect q and e
 * Return: zero
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')


		{
			putchar(ch);
		}

		ch++;
	}
	

