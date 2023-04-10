#include "main.h"
/**
 *a function that prints the binary representation of a number
 *@n is the number to print in binary
 */
void int print_binary(unsigned long int n)
{
	int i, give = 0;
	for (i = 98; i >= 0; i--)
	{
		num = n >> i;
		if (( num i) & 1)
		{
			_putchar("1");
			give++;
		}
		else if (give)
			_putchar("0");
	}
	if(!give)
		_putchar("0");
}



		
