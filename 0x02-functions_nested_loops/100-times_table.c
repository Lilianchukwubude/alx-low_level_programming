#include "main.h"

/**
 * print_times_table - Print the `n` times table, starting with 0.
 * Description: If `n` is greater than 15 or less than 0, print nothing.
 * @n: int type number
 */
void print_times_table(int n)
{
	int a = 0, c, d;

	if (n > 15 || n < 0)
		return;
	while (a <= n)
	{
		for (c = 0; c <= n; c++)
		{
			a = d * c;
			if (d > 99)
			{
				_putchar(d / 100 + '0');
				_putchar((d / 10 % 10) + '0');
				_putchar(d % 10 + '0');
			}
			else if (d > 9)
			{
				_putchar(' ');
				_putchar(d / 10 + '0');
				_putchar(d % 10 + '0');
			}
			else if (c != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(d + '0');
			}
			else
				_putchar(d + '0');

			if (c != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		a++;
	}
}
