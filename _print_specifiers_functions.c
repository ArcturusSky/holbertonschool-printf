#include "main.h"
#include <stdlib.h>

/**
 * print_char - print character.
 * @c: The character to be printed.
 * This function takes a character as input and prints it using the `_putchar`
 * function.
 *
 * Return: The number of characters printed.
 */

int print_char(char c)
	{
		_putchar(c);
		return (0);
	}
/**
 * print_string - Prints a string of characters.
 * @string: The character to be printed.
 *
 * Return: The number of characters printed.
 */

int print_string(char *string)
	{
		while (*string != 0)			/* Loop until reaching the end of the string */
		{
			_putchar(*string);			/** Print the current character */
			string++;					/** Move to the next charater in the string */
		}

		return (0);
	}

/**
* print_decimal - Prints a decimal number.
* @decimal: integer in base 10 to print
*
* Return: Function for print a decimal number.
*/

int print_decimal(int decimal)
{
		int num = decimal;				/** Copy original int to avoid altering "decimal". */
		int count_to_print = 0;			/** Counter to count the numb of char to print. */
		int power;

		if (decimal < 0)				/** Check if decimal is negativ. */
		{
			_putchar('-');				/** Print sign. */
			decimal = -decimal;			/** Convert "decimal" to positive. */
			num = decimal;				/** Update "num".*/
			count_to_print++;			/** Increment the character counter. */
		}
		power = 1;						/** Find the highest power of 10.*/

		while (num / power >= 10)
		{
			power *= 10;				/** Multiply by 10 to find the power.*/
		}

		while (power > 0)				/** Print each number. */
		{
			_putchar((decimal / power) % 10 + '0');
			decimal %= power;			/** Update decimal to remove the printed digit. */
			power /= 10;				/** Reduce power to move on to the next digit. */
			count_to_print++;			/** Increment the character counter. */
		}
		return (count_to_print);
}


/**
* print_integer - Prints a integer.
* @integer: List of variable arguments containing the integer to be printed.
*
* Return: Function for print a integer.
*/

int print_integer(int integer)
{
		int count_to_print = 0;
		unsigned int number;
		unsigned int divisor;
		unsigned int temp;

										/** Check if negative numbers. */
		if (integer < 0)
		{
			_putchar('-');				/** Print sign'-'.*/
			number = (unsigned int)(-integer);
										/**  Convert integer to positive using an unsigned variable. */

			count_to_print++;			/** Increment the character counter. */
		}
		else
		{
			number = (unsigned int) integer;
										/** If integer is positive, copy it directly into num.*/
		}


		divisor = 1;
		temp = number;

		while (temp / 10 > 0)
		{
			divisor *= 10;				/** Multiply by 10 to find the power. */
			temp /= 10;					/** Reduce temporary to continue the calcul. */
		}

		while (divisor > 0)
		{
			_putchar((number / divisor) % 10 + '0');
										/** Extract and print the figure. */
			number %= divisor;			/** Update num to remove printed digit. */
			divisor /= 10;				/** Reduce the divisor to move to the next digit. */
			count_to_print++;			/**  Increment the character counter.*/
		}
		return (count_to_print);		/** Return the total number of char printed. */
	}
