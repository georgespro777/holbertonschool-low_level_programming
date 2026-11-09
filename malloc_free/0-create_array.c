#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: character to initialize the array
 * Return: pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		array[i] = c;
		i++;
	}

	return (array);
}
