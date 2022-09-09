#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` to print lowercase and then uppercase alphabet.
 * Return: 0
 */
int main(void)
{
	char j = 'a';

	while (j <= 'z')
	{
		putchar(j);
		c++;
	}

	j = 'A';

	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}

	putchar('\n');

	return (0);
}
