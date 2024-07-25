#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_char - print character.
 * @c: The character to be printed.
 * This function takes a character as input and prints it using the `_putchar`
 * function.
 */

	void print_char(char c)
		{
			_putchar(c);
		}
/**
 * print_string - print a string of characters.
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


	/**
	* print_decimal - Prints a decimal number.
	* @arg: argument to print
	*
	* Return: Function for print a decimal number.
	*/

	int print_decimal(va_list arg)

	{
			int n = va_arg(arg, int);
			/*Retrieve the integer passed as an argument*/
			int num = n;
			int i = 0;

			if (n < 0)
			{
				_putchar('-');			/* print sign. */
				n = -n;					/* Convert n to positive. */
				num = n;				/* change num.*/
				i++;					/* Increment the character counter. */
			}
			int puissance = 1;			/* Find the highest power of 10.*/

			while (num / puissance >= 10)
			{
				puissance *= 10;		/* Multiply by 10 to find the power.*/
			}

			while (puissance > 0)		/* Print each number. */
			{
				_putchar((n / puissance) % 10 + '0');
				n %= puissance;			/* Update n to remove the printed digit. */
				puissance /= 10;		/* Reduce power to move on to the next digit. */
				i++;					/*  Increment the character counter. */
			}
			return (i);
	}


	/**
	* print_integer - Prints a integer.
	* @arg: List of variable arguments containing the integer to be printed.
	*
	* Return: Function for print a integer.
	*/
	int print_integer(va_list arg)
{
			int i = 0;
			int n = va_arg(arg, int);
			/*  Retrieve the integer passed as an argument.*/
			unsigned int number;


			if (n < 0)					/* Managing negative numbers. */
			{
				_putchar('-');			/* Print sign'-'.*/
				number = (unsigned int)(-n);
				/*  Convert n to positive using an unsigned variable. */

				i++;					/* Increment the character counter. */
			}
			else
			{
				number = (unsigned int)n;
				/* If n is positive, copy it directly into num.*/
			}


			unsigned int divisor = 1;
			unsigned int temp = number;

			while (temp / 10 > 0)
			{
				divisor *= 10;			/* Multiply by 10 to find the power. */
				temp /= 10;				/* Réduire temporairement pour continuer le calcul. */
			}

			while (divisor > 0)
			{
				_putchar((number / divisor) % 10 + '0');
				/* Extract and print the figure. */
				number %= divisor;						/* Update num to remove printed digit. */
				divisor /= 10;							/* Reduce the divisor to move to the next digit. */
				i++;									/*  Increment the character counter.*/
			}
			return (i);		/* Return the total number of characters printed. */
		}
