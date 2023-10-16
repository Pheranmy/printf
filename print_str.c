#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: string pointer
 * Return: 1
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
/**
 * _strlenc -strlen fuction but applied for constant char pointer
 * @str: char pointer
 * Return: 1
 */
int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
