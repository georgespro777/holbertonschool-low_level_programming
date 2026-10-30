
#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int n;
	int resultat;

	n = 0;
	while (n <= 9)
	{
		resultat = n * 9;

		if (resultat < 10)
		{
			_putchar(resultat + '0');
		}
		else
		{
			_putchar(resultat / 10 + '0');
			_putchar(resultat % 10 + '0');
		}

		_putchar('\n');
		n++;
	}
}
