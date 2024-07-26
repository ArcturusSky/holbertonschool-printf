#include "main.h"
#include <unistd.h>				/** Library that allows us to use `write`function */
#include <stdlib.h>				/** Library that allow us to use `malloc` `Free`. */
#include <stdarg.h>				/** Library that allow us to use variedic fonctions. */

/**
 * _printf - Customized function for displaying messages.
 * @format: Given string to print each character and check if it holds
 * a specifier to know how arguments should be displayed.
 *
 * Return: Total number of characters printed.
 */

int _printf(const char *format, ...)
{
	int final_size_to_print = 0; /** Declaring a var to store final size. */
	va_list print_argument_list; /** Declaring list of variable arguments. */

	va_start(print_argument_list, format);
	if (format == NULL) /** Check if the format is NULL. */
	{
		va_end(print_argument_list);
		return (-1);
	}
	for (; *format != 0 ; format++)
	{
		if (*format == '%') /** Check if a specifier is found */
		{
			format++; /** Increment to see next character */
			if (*format == 'c')
				final_size_to_print += print_char(va_arg(print_argument_list, int));
			else if (*format == 's')
				final_size_to_print += print_string(va_arg(print_argument_list, char *));
			else if (*format == '%')
				final_size_to_print += _putchar('%'); /** Just printing it is enough */
			else if (*format == 'd')
				final_size_to_print += print_decimal(va_arg(print_argument_list, int));
			else if (*format == 'i')
				final_size_to_print += print_integer(va_arg(print_argument_list, int));
			else if (*format == 0)
				{
				va_end(print_argument_list);
				return (-1);
				}
			else
			{
				final_size_to_print += _putchar('%');	/** Handle unknown specifiers. */
				final_size_to_print += _putchar(*format);
			}
		}
		else
		final_size_to_print += write(1, format, 1);  /** Print char n/a by spec */
	}
	va_end(print_argument_list);
	return (final_size_to_print);
}
