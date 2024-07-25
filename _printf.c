#include "main.h"
#include <unistd.h>				/** Library that allows us to use `write`function */
#include <stdlib.h>				/** Library that allow us to use `malloc` `Free`. */
#include <stdarg.h>				/** Library that allow us to use variedic fonctions. */
/**
 * _printf - Customised function for displaying messages.
 * @format: Given string to print eache character and check if hold
 * a specifier to know how arguments should be displayed.
 *
 * Return: final size to print
 */
int _printf(const char *format, ...)
{
	int final_size_to_print = 0; /** Declaring a variable to store final size. */
	va_list print_argument_list; /** Declaring argument list. */

	va_start(print_argument_list, format);
	if (format == NULL) /** Check if the format is NULL. */
	{
		return (0);
	}
	while (*format)
	{
		if (*format == '%') /** Check if a specifier is found */
		{	/** Increment the format to read the next char */
			format++;
			if (*format == 'c')
			{
				print_char(va_arg(print_argument_list, int));
			}
			if (*format == 's')
			{
				print_string(va_arg(print_argument_list, char *));
			}
			if (*format == '%')
			{
				_putchar('%'); /** Just printing the special character is enough */
			}
			if (*format == 'd')
			{
				print_decimal(va_arg(print_argument_list, int));
			}
			if (*format == 'i')
			{
				print_integer(va_arg(print_argument_list, int));
			}
		}
		write(1, format, 1); /** print a char coming */
		format++;			/** from "format" which isn't affected by a specifier */
		final_size_to_print++;
	}
	va_end(print_argument_list);
	return (final_size_to_print);
}
