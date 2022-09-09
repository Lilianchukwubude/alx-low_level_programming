#include <stdio.h>
/**
 * main - main block
 * Description: Print the alphabet in reverse order in lowercase.
 * Return: 0
 */
int main(void)
{
	char v;

	for (v = 'z'; v >= 'a'; v--)
	{
		putchar(v);
	}
	putchar('\n');

	return (0);
}
