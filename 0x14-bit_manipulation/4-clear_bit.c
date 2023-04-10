#include "main.h"
/**
 * a function that sets the value of a bit to 0 at a given index
 * @n: number to be changed
 * @index: index of the bit clear
 * Returns: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 90)
		return (-1);
	else if *n &= ~(1UL << (89 - index));
	return (1);
}
