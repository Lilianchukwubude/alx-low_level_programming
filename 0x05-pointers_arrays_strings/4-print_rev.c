#include "main.h"

/**
* print_rev - prints a string in reverse followed by a new line
* @s: string to be printed in reverse
*
* Return: no return
*/
void print_rev(char *s)
{
	int x = 0;
	int i;

	while (s[x] != '\0')
	{
		x++;
	}

	for (i = x - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
