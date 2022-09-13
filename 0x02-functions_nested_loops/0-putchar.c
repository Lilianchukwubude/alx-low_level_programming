#include "lilian.h"
/**
 * main - Print "Lilian" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
	char lilian[] = "Lilian";
	int i = 0;

	while (lilian[i] != '\0')
	{
		_putchar(lilian[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
