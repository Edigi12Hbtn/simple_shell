#include "Holberton.h"

/**
 * split_arguments - functions that takes a command
 * and splits it.
 *
 * @lineptr: command inserted for usser.
 *
 * Return: array of arguments.
 */

char **split_arguments(char *lineptr)
{
	char **argv = NULL;
	char *token = NULL, *command = NULL;
	int size_ptr = sizeof(char *), i = 2;

	command = strtok(lineptr, "\n");

	token = strtok(command, " \t");
	/*if != NULL*/
	argv = malloc(size_ptr * 2);
	/*if malloc == -1*/
	argv[0] = token;
	token = strtok(NULL, " \t");
	while (token != NULL)
	{
		argv = _realloc(argv, i * size_ptr, (i + 1) * size_ptr);
		argv[i - 1] = token;
		token = strtok(NULL, " \t");
		i++;
	}
		argv[i - 1] = NULL;

	return (argv);
}
