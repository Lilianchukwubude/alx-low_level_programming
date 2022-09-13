#include "main.h"
/**
 * jack_bauer - Print every minute of the day of Jack Bauer
 * Description: Start from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int y = 0;
	int o = 0, p = 0, q = 0, r = 0;

	while (y < 1440)
	{
		_putchar(o + '0');
		_putchar(p + '0');
		_putchar(':');
		_putchar(q + '0');
		_putchar(r + '0');
		_putchar('\n');

		r++;
		if (r > 9)
		{
			r = 0;
			q++;
		}
		if (q > 5)
		{
			q = 0;
			p++;
		}
		if (p > 9)
		{
			p = 0;
			o++;
		}
		y++;
	}
}
