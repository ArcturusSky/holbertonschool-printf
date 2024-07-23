#include "main.h"

/**
 * _strcmp - Fonction that allows us to compare two strings of char
 * @s1: String 1 to test
 * @s2: String 2 to test
 *
 * Return: int neg if diffe, 0 si égal, entier si positif
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}


/**
 * get_specifier_func - Function that selects the correct function to use in
 * order to print the correct output for each given format
 * @format: format used by the user in the input
 *
 * Return: the function that correspond the specifier or NULL
 */

int (*get_specifier_func(char *format))(void *)
{
	int current_index = 0;
	/** Array storing the specifiers and the corresponding function*/
	FormatSpec specifiers_table[] = {
		{"%c", print_char},
		{"%s", print_string},
		{"%%", print_percent},
		{"%d", print_decimal},
		{"%i", print_integer},
		{NULL, NULL}
	/** Mark the end of the array */
	};

	/**
	 * Going through the array to look for
	 * the corresponding specifier
	 * until "NULL" to have a more dynamic array
	 */
	while (specifiers_table[current_index].Specifier_Entry != NULL)
	{
		if (_strcmp(specifiers_table[current_index].Specifier_Entry, format) == 0)
		{
			/** Return the corresponding function */
			return (specifiers_table[current_index].Printing_Function);
		}
		current_index++;
	}
	return (NULL);
}
