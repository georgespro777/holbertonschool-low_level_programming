#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *  
 * return - 0 on success
 */
int main(void)
{
        char letter;

	letter = 'z';
	while (letter <= 'a')
	  {
	    putchar(letter);
	    letter++;
	  }
	putchar("\n");
	
	return (0);
}
