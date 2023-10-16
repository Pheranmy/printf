#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

/**
 * select_con_spec - selects the conversion specifier based on the input
 * @format: the string from _printf
 * @index: the index within that string
 * @args: the arguments from _printf
 *
 * Return: returns the total characters printed
 */


int select_con_spec(const char *format, int index, va_list args)
{
	con_specs_t cons[] = {
		{'c', con_char},
		{'s', con_str},
		{'%', con_perc},
		{' ', con_space},
		{'\0', con_space}
	};
	int j = 0, chars_printed = 0;

	for (j = 0; cons[j].spec != '\0'; j++)
	{
		if (format[index] == cons[j].spec)
		{
			chars_printed += cons[j].func(args);
		}
	}

	return (chars_printed);
}
