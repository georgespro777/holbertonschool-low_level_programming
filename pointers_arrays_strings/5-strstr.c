#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: main string
 * @needle: substring to find
 * Return: pointer to substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' &&
		       haystack[i + j] == needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
		i++;
	}
	if (needle[0] == '\0')
		return (haystack);

	return (0);
}
