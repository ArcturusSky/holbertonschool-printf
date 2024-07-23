#include "main.h"
#include <stdlib.h>
/**
 * print_char - print charater.
 *@c: The character to be printed.
 *This function takes a character as input and prints it using the _putchar
 * function.
 *
 */
	void print_char(char c)
		{
			_putchar(c);
		}
/**
 * print_string - Prints a string of characters.
 * @string: The character to be printed.
 *
 * Return: The number of characters printed.
 */
	void print_string(char *string)
		{
			while (*string != 0)			/*loop to null character */
			{
				_putchar(*string);			/* Print the current character */
				string++;					/* Move to the next charater in the string */
			}
		}
/**
 * print_percent - Print charater '%'.
 *
 * Description: This function prints the '%
 * character using the _putchar function.
 */
	void print_percent(void)
		{
			_putchar('/%');     /* Print the % character */
		}