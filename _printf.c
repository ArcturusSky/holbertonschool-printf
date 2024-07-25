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
	/** Declaring a variable to store the final output size. */
	int final_size_to_print = 0;
	/** Declaration of the list of variable arguments. */
	va_list print_argument_list;


	
	va_start(print_argument_list, format);
	/** Check if the format is NULL. */
	if (format == NULL)
		ERROR;

	while (*format)
	{
		/** Check if a specifier is found */
		if (*format == '%')
		{
			/** Increment the format to read the next character and determine which case it is */
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
				/** Just printing the special character is enough */
				_putchar('%');
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

		else
		/** print a character coming from "format" which isn't affected by a specifier */
		write(1, format, 1);
		format++;
		final_size_to_print++;
	}

	va_end(print_argument_list);
	return (final_size_to_print);
}
