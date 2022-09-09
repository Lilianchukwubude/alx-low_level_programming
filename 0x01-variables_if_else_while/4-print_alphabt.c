#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * You can only use the putchar
 * Return: 0
 */

int main(void)
{
int pi = 'a';
while (pi <= 'z')
{
if (pi == 'e' || pi == 'q')
{
pi += 1;
}
else
{
putchar(pi);
pi += 1;
}
}
putchar('\n');
return (0);
}
