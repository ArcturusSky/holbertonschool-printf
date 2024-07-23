#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>				/** Library that allow us to use `malloc` `Free`. */
#include <stdarg.h>				/** Library that allow us to use variedic fonctions. */


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
