#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 * Return: pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	unsigned int i, len;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	copy = malloc((len + 1) * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < len)
	{
		copy[i] = str[i];
		i++;
	}

	copy[i] = '\0';

	return (copy);
}

