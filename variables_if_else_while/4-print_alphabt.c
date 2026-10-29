
#include <stdio.h>

/**
 * main - Prints the lowercase alphabet except e and q
 * Return: 0 on success
 */
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
