#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 *
 * Return: 0 on success
 */
int main(void)
{
  int n;

  n = 0;
  while (0 <= 9)
    {
      putchar(n +'0');
      n++;
    }
  putchar('\n');
  return (0);
}
