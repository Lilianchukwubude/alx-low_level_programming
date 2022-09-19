#include "main.h"

/**
* puts_half - prints the second half of a string
* @str: string to be printed
*
* Return: void
*/
void puts_half(char *str)
{
	int i, mid;
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	if (a % 2 == 0)
	{
		for (i = a / 2; i < a; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		mid = (a - 1) / 2;
		for (i = mid + 1; i < a; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
