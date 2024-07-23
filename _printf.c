#include "main.h"
#include <unistd.h>				/** Library that allows us to use `write`function */
#include <stdlib.h>				/** Library that allow us to use `malloc` `Free`. */
#include <stdarg.h>				/** Library that allow us to use variedic fonctions. */

/**
 * _printf - Customised function for displaying messages.
 * @format: Format character string specifying
 * how arguments should be displayed.
 *
 * Return: final size to print
 */

int _printf(const char *format, ...)
{
	int final_size_to_print;							/* Variable for storing output size. */
	va_list print_argument_list;
	char *given_argument;


	/*  Declaration of the list of variable arguments. */

	if (format == NULL)					/* Check if the format is NULL. */
		ERROR;

	while (*format)
	{
		if (*format == '%')
		{
			if (format == '%c')
			{
				/* code */
			}

			if (format == '%%')
			{
				/* code */
			}

			if (format == '%s')
			{
				/* code */
			}

			if (format == '%d')
			{
				/* code */
			}

			if (format == '%i')
			{
				/* code */
			}
			
		format++;
		}

		else
		write(1, format, 1);
		format++;
	}

	va_end(print_argument_list);
	return (final_size_to_print);
}
