#include "main.h"
/**
 * get_endianness- to check if a machine is little ora big endian
 * Returns: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int val = 1;
	char *c = (char *) &val;
	if (*c)
		return 1;
	else
		return 0;
}
