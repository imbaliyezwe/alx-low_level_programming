#include "main.h"

/**
* binary_to_uint - converts a binary number to unsigned int
* @x: string containing the binary number
*
* Return: the converted number
*/
unsigned int binary_to_uint(const char *x)
{
	int w;
	unsigned int dec_val = 0;

	if (!x)
		return (0);

	for (w = 0; x[w]; w++)
	{
		if (x[w] < '0' || x[w] > '1')
			return (0);
		dec_val = 2 * dec_val + (x[w] - '0');
	}

	return (dec_val);
}

