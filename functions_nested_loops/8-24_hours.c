
#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	int heure;
	int minute;

	heure = 0;
	while (heure <= 23)
	{
		minute = 0;
		while (minute <= 59)
		{
			_putchar('0' + heure / 10);
			_putchar('0' + heure % 10);
			_putchar(':');
			_putchar('0' + minute / 10);
			_putchar('0' + minute % 10);
			_putchar('\n');
			minute++;
		}
		heure++;
	}
}
