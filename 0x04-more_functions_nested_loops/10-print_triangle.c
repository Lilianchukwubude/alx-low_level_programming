#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int b, c;

		for (b = 1; b <= size; b++)
		{
			for (c = i; c < size; c++)
			{
				_putchar(' ');
			}

			for (c = 1; c <= b; c++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
