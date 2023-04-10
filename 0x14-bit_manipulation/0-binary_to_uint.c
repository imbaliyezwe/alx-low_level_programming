#include "main.h"
/**
 * a function that converts a binary number to an unsigned int
 * where b is pointing to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int answer = 0;
	unsigned int i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] == '1')
			answer = (answer << 1 ) | 1;
		else if (b[i] =='0')
			answer <<= 1;
		else
			return (0);
		i++;
	}
	return (answer);
}
