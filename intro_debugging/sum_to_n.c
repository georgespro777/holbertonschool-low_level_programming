#include <stdio.h>

/**
 * sum_to_n - calculates the sum from 1 to n
 * @n: the limit number
 *
 * Return: the sum of numbers from 1 to n
 */
int sum_to_n(int n)
{
	int i;
	int sum = 0;

	for (i = 1; i <= n; i++)
	{
		sum = sum + i;
	}

	return (sum);
}

/**
 * main - prints the sum from 1 to 10
 *
 * Return: 0 on success
 */
int main(void)
{
	printf("%d\n", sum_to_n(10));

	return (0);
}
