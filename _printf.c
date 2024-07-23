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
	int size;							/* Variable for storing output size. */
	va_list print_argument_list;
	char *given_argument;


	/*  Declaration of the list of variable arguments. */

	if (format == NULL)					/* Check if the format is NULL. */
		ERROR;

	else
	{
		given_argument = va_arg(print_argument_list, char *);
			while (*given_argument != 0)
			{
			_putchar(*given_argument);
			given_argument++;
			}
	}



	return (size);
}
