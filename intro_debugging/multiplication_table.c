#include <stdio.h>

/**
 * main - prints a multiplication table
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	int j;

	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= 3; j++)
		{
			printf("%d ", i * j);
		}
		printf("\n");
	}

	return (0);
}

