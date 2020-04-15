#include "Holberton.h"

/**
 * _strdup - returns a pointer to a newly
 * allocated space in memory, which contains
 * a copy of the string given as a parameter.
 *
 * @str: string.
 *
 * Return: direction to copy.
 */

char *_strdup(char *str)
{
	char *strcpy;
	int size = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	strcpy = malloc((size * sizeof(char)) + 1);
	if (strcpy == NULL)
		return (NULL);
	while (i < size)
	{
		strcpy[i] = str[i];
		i++;
	}
	strcpy[i] = str[i];

	return (strcpy);
}
