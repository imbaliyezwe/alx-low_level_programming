#include "main.h"
/**
 * binary_to_uint - changes a binary number to unsigned int
 * @y: binary number contained in the string
 *
 * Return: the changed number
 */
unsigned int binary_to_uint(const char *y)
{
	int i;
	unsigned int dec_val = 0;

	if (!y)
		return (0);

	for (i = 0; y[i]; i++)
	{
		if (y[i] < '0' || y[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (y[i] - '0');
	}

	return (dec_val);
}
