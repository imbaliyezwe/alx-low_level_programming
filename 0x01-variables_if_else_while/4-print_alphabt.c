#include <stdio.h>
/**
 * main - main block
 * Description: Print alphabets in lowercase and add new lin
 * exept for q & e
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);


}
