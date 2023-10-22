#include <unistd.h>

/**
 * _putchar - prints a character c to stdout
 * @c: character to be printed
 *
 * Return: 1 if successful
 * -1 if error
 */


int our _putchar(char c)
{
	return (write(1, &c, 1));
}
