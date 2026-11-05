#include "main.h"

/**
 * _strcpy - copies a string from source to destination
 * @dest: destination buffer
 * @src: source string to copy
 *
 * Return: pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
  int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
