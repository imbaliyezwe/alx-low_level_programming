#include "main.h"
/**
 * a function that sets the value of a bit to 1 at a given index
 * @n: pointer of the number to change
 * @index:the bit to set to 1
 *
 * Returns: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >=98 )
		return( -1);
	*n |= (1UL << index);
	return (1);
}
