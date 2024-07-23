#include "main.h"
#include <stdlib.h>
/**
 * _printf - Customised function for displaying messages.
 * @format: Format character string specifying
 * how arguments should be displayed.
 *
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
	if (format == '%')
	/*à compléter*/

	format++;

else
	write(1, format, 1);
}
format++;




	va_end(print_argument_list);
	return (final_size_to_print);
}
