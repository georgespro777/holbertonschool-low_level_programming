#include <stdio.h>

/**
 * main - calculates the sum of numbers from 1 to 8
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i <= 8; i++)
	{
		sum = sum + i;
	}

	printf("%d\n", sum);

	return (0);
}
