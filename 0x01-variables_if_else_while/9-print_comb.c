#include <stdio.h>

/** 
 * main - program that prints all possible notions
 * Return: zero
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i == '9')
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
