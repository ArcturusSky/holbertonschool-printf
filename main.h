#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>				/** Library that allows us to use `write`function */
#include <stdlib.h>				/** Library that allows us to use `malloc` `Free`. */
#include <stdarg.h>				/** Library that allows us to use variedic fonctions. */

#define ERROR (write(1, "ERROR\n", 6))
/** Defining a MACRO to print "ERROR" in (unlikely) case of NULL format to */

int _printf(const char *format, ...);
/** Function that display output according to given format. */

int _putchar(char c);
/** To write a single character to standard output (stdout). */

int print_char(char c);
/** Function that print a char */

int print_string(char *string);
/** Function that prints a string*/

int print_percent(void);
/** Function that print a % */

int print_decimal(int n);
/** Function that print an integer */

int print_integer(int n);
/** Function that print an integer */



#endif
