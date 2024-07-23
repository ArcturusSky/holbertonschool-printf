#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>				/** Library that allows us to use `write`function */
#include <stdlib.h>				/** Library that allow us to use `malloc` `Free`. */
#include <stdarg.h>				/** Library that allow us to use variedic fonctions. */

/** Start - Macros created */

#define ERROR (write(1, "ERROR\n", 6))
/** Print "ERROR" followed by a new line */

/** End - Macros created */

/**
 * struct SpecifierFormat - Structure to set an array of specifiers
 *
 * @Specifier_Entry: the specifier given for the format
 * @Printing_Function: The function associated
 */

typedef struct SpecifierFormat
{
	char *Specifier_Entry;
	int (*Printing_Function)(char *);
} FormatSpec;

int _printf(const char *format, ...);
/** Function that display output according to given format. */

int _putchar(char c);
/** To write a single character to standard output (stdout). */

int _strcmp(char *s1, char *s2);
/** _strcmp - Fonction that allows us to compare two strings of char */


#endif
