#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int total;
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;

	array = malloc(total);
	if (array == NULL)
		return (NULL);

	ptr = array;
	for (i = 0; i < total; i++)
	{
		ptr[i] = 0;
	}

	return (array);
}
