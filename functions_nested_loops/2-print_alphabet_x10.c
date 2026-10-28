
#include "main.h"

/**
 * print_alphabet_10x - Prints the alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_10x(void)
{
	int line;
	char letter;

	line = 0;
	while (line < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		line++;
	}
}
