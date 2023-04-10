#include "main.h"
/**
 * flip_bits - counts the number of bits to change
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, give = 0;
	unsigned long int value = n ^ m;
	while (value)
	{ 
		give += value & 1;
		value >>= 1;
	}
	return give;
}
