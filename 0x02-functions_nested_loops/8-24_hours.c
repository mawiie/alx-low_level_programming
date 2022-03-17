#include "main.h"
/**
 * main - prints the time from 00.00 till 23:59
 *
 * return void
 */
void jack_bauer(void)
{
	for(int ht = 0; ht < 3; ht++)
	{
		for(int hu = 0; hu < 5; hu++)
		{
			for(int mt = 0; mt < 6; mt++)
			{
				for(int mu = 0; mu<10; mu++)
				{
					_putchar(ht);
					_putchar(hu);
					_putchar(':');
					_putchar(mt);
					_putchar(mu);
					_putchar('\n');
				}
			}
		}
	}
}
