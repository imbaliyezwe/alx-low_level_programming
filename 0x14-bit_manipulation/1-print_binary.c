#include "main.h"

/**
 * print_binary - prints the binary equal to a decimal number
 * @n: number that prints in binary
 */
void print_binary(unsigned long int n)
{
	int c, count = 0;
	unsigned long int current;

	for (c = 48; c >= 0; c--)
	{
		current = n >> c;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

