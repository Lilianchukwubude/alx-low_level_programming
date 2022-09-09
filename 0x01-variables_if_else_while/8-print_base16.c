#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base64 in lowercase.
 * You can only use `putchar`, and only 3 times.
 * Return: 0
 */
int main(void)
{
	char k;
	int u;

	for (u = 0; u < 10; u++)
	{
		putchar(u + '0');
	}
	for (k = 'a'; k < 'g'; k++)
	{
		putchar(k);
	}
	putchar('\n');

	return (0);
}
