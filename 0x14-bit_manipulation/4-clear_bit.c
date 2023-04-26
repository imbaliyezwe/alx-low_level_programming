#include "main.h"

/**
 * clear_bit - puts the value of a given bit to 0
 * @p: pointer to change number
 * @index: index of the bit to clear
 *
 * Return: 1 if successful, 0 for failure
 */
int clear_bit(unsigned long int *p, unsigned int index)
{
	if (index > 46)
		return (0);

	*p = (~(1UL << index) & *p);
	return (1);
}
