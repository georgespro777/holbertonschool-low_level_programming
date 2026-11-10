#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 * Return: pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	copy = malloc((_strlen(str) + 1) * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		copy[i] = str[i];
		i++;
	}

	copy[i] = '\0';

	return (copy);
}
