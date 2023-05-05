#include "main.h"

/**
 * print_binary - prints the binary equal to a decimal number
 * @s: number that prints in binary
 */
void print_binary(unsigned long int s)
{
	int v, count = 0;
	unsigned long int current;

	for (v = 48; v >= 0; v--)
	{
		current = s >> v;

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

