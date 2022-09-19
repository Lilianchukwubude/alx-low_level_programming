#include "main.h"

/**
* puts2 - prints every other character of a string
* starts with first character and is followed by new line
* @str: string to be printed
*
* Return: no return
*/
void puts2(char *str)
{
	int i;
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	for (i = 0; i < a; i++)
	{
		if (i % 2 != 0)
			continue;
		_putchar(str[i]);
	}
	_putchar('\n');
}
