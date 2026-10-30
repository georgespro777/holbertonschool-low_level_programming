#include <stdio.h>

/**
 * main - prints all single digit numbers
 *
 * return : 0 on success
 */
int main(void)
{
        int n;
       
        n = 0;
	while (n <= 9)
        {
            putchar (n +'0');
	    n++;
        }
	putchar('\n');
	return (0);
}
