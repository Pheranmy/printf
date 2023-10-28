#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * con_char - prints characters
 * @args: the argument to be printed
 *
 * Return: number of characters printed
 */

int con_char(va_list args)
{
	int chars_printed = 0;

	our_putchar(va_arg(args, int));
	chars_printed++;

	return (chars_printed);
}

/**
 * con_str - prints a string
 * @args: the argument to be printed
 *
 * Return: number of characters printed
 */

int con_str(va_list args)
{
	int chars_printed = 0;
	int i = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		our_putchar(str[i]);
		chars_printed++;
	}

	return (chars_printed);
}

/**
 * con_perc - prints percentage % character
 * @args: the argument to be printed
 *
 * Return: number of characters printed
 */

int con_perc(__attribute__((unused)) va_list args)
{
	int chars_printed = 0;

	/* our_putchar('e'); */
	/* our_putchar(va_arg(args, int)); */
	our_putchar('%');
	chars_printed++;

	return (chars_printed);
}

/**
 * con_error - returns an error. Exists in case we need to return erros
 * @args: the argument to be printed. Is not used
 *
 * Return: returns error -1
 */

int con_error(__attribute__((unused)) va_list args)
{
	int chars_printed = -1;

	return (chars_printed);
}
