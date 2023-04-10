#include "main.h"
/**
 * a function that returns the value of a bit at a given index
 * @n: number we need to find
 * @index: index of the bit
 *
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_num;
	if (index >= 64)
		return -1;
	bit_num =(n >> index) & 1;
	return (bit_num);
}
