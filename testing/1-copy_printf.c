#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

/**
 * _printf - prints out a string
 * @format: the character to be printed out.
 * Return: the number of characters printed, excluding the null byte
 */

int _printf(const char *format, ...)
{
	 con_specs_t cons[] = {
		{'c', con_char}, {'s', con_str}, {'%', con_perc}, {' ', con_space},
		{'d', con_dec}, {'i', con_int}, {'\0', con_space}};
	int index = 0, chars_printed = 0, j = 0, temp = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (index = 0; format[index] != '\0'; index++)
	{
		if (format[index] == '%')
		{
			if (format[index + 1] == '\0')
				return (-1);
			temp = index; /*index++;*/
			/* select_con_spec(format, index, args); */
			for (j = 0; cons[j].spec != '\0'; j++)
			{
				if (format[index + 1] == cons[j].spec)
				{
					chars_printed += cons[j].func(args);
					index++;
				}
			}
			if (temp == index)
			{
				our_putchar(format[index]);
				chars_printed++;
			}
		}
		else
		{
			write(1, &format[index], 1);
			chars_printed++;
		}
	}
	va_end(args); /* printf("chars printed: %d\n", chars_printed); */
	return (chars_printed);
}
