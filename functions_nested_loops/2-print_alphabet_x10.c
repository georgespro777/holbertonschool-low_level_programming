#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
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
