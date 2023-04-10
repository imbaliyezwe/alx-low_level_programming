#include "main.h"
#include <uistd.h>
/**
 * the _putchar writes the character of c to stdout
 * c to the character to print
 *
 * Return: 1 if sucsessful
 * Return -1 if unsucsessful or error
 * */
int -putchar(char c)
{
	return (write(1, &c, 1));
}
