#include "main.h"

/**
 * _isalpha - Checks if a character is lowercase
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _isalpha (int c)
{
  if (c >= 'a' && c <= 'z')
    {
      return (1);
    }
  else
    {
      return (0);
    }
}
