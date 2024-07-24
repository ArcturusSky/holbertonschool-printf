# Project `printf`

This `README.md` will contain the necessary files for the `printf` project. This is our first group project, and we will be working in pairs. Our team consists of Anne-Cécile Besse (Arc) and Xavier Piedallu. 

To begin with, we decided to devide the work:

- Arc will: 
  - write the documentation (`REAMDE.md`)
  - code the `get_specifier_function.c` file

- Xavier will:
  - write the Flowchart.
  - code the `print_specifiers_functions.c` (the three first specifiers)

 - Teamwork:
   - `main.h` file
   - `_printf` file

- The MANPAGE will be a team effort throughout the project. 

Note : This `README.md` will be updated several times as the project progresses.

## Summary

- [Project `printf`](#project-printf)
	- [Summary](#summary)
	- [Requierements](#requierements)
		- [Operating System:](#operating-system)
		- [Compilation flags](#compilation-flags)
	- [Glossary (in alphabetical order)](#glossary-in-alphabetical-order)
	- [`_printf`](#_printf)
		- [How to use `_printf` and its specifier?](#how-to-use-_printf-and-its-specifier)
	- [Manpage `_printf`](#manpage-_printf)
		- [How we tested our project.](#how-we-tested-our-project)
		- [Some tests to try:](#some-tests-to-try)
	- [Flowchart](#flowchart)
	- [Conclusion](#conclusion)
	- [Author](#author)

## Requierements

Before begining, ensure that you have the following requirements:

### Operating System:

  - Ubuntu 22.04 LTS (of compatible version)

- **Softwares**:

  - **Visual Studio Code:** Ensure you have the latest version installed (You can find it [here](https://code.visualstudio.com/))

  - **GCC (GNU Compiler Collection):** Requiered for compiling the project. You can install it on your **Visual Code** using this: 
  
```sh
sudo apt-get install gcc
```
  
  - **Betty Style:** A style guide for the C programming language used by the Holberton School and ensuring a well structured and readable code. Ensure you have the Betty linter installed:

```sh
git clone https://github.com/holbertonschool/Betty.git
cd Betty
./install.sh
```

  - **Valgrind:** A tool for memiiry debugging, memory leak detection, and profiling. Install it using:

```sh
sudo apt-get install valgrind
``` 

- **Version Control**

**Git:** Ensure you have Git installed for version control:

```sh
sudo apt-get install git
```

### Compilation flags

This project must be compiled with the following flags:

```sh
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format
```

- **`-Wall`:** Enables all standard compiler warnings.

- **`-Wextra`:** Enables additional warnings not covered by **`-Wall`**.

- **`-Werror`:** Treats all warnings as errors, stopping compilation.

- **`-pedantic`:** Enforces strict ISO C compliance.

- **`-std=gnu89`:** Uses the GNU89 standard for C, allowing GNU extensions to the ANSI C standard

- **`Wno-format`:** Disables format warnings.

## Glossary (in alphabetical order)

**B**

  - **bash**: A Unix shell and command language
	
  - **Betty Style:** A style guide for the C programming language ensuring code readibility and consistency 

**C**

  - **character:** A single alphanumeric symbol
 
  - **Compilation flags:** Options passed to the compiler to control the compilation process. 

**F**  

  - **Formatted output:** Output that is formatted according to specified rules, such as alignement, width, and (here) type of data.
  
  - **Format specifier:** A placeholder in the format string that indicates how a value should be formatted and displayed.
  
  - **`FormatSpec`:** A struct used to map specifiers to their corresponding functions.
  
  - **Function:** A block of code that performs a specific task.   

**G**  

  - **GCC (GNU Compiler Collection):** A compiler system supporting various programming languages, including C. 
  
  - **Git:** A version control software used for tracking changes in source code during software development. 

**I**  

  - **Integer:** A whol number, positive of negative, without decimals 

**M**

  - **Manual page (manpage):** A document that provides informations about a command for UNIX and UNIX-LIKE operating systems, accessible via the `man` command. 
  
  - **Memory leak:** A situation where a program does not release memory that is no longer needed, leading to a gradual loss of available memory. 

**N**

  - **`NULL`:** A macro representing a null pointer, indicating the end of a list or no value. 

**P**  

  - **Plain text:** Ordinary characters in the format string that are printed as-is 
  - **`Printing_Function`:** A member of the Formatspec struc, representing the function to handle the corresponding specifier.

**R**  

  - **README.md:** A markdown file containing information about a project, includings instructions, requirements, and other essential details.

**S**

  - **Specifier:** A symbol in the format string that specifies the type of data to be formatted.
  
  - **`Specifier_Entry`:** A member of the `FormatSpec` struct, representing the format specifier.
  
  - **String:** A sequence of characters. 

**U**

  - **Ubuntu:** A popular Linux distribution based on Debian, known for its user-friendliness. 

**V**

  - **Valgrind:** A programming tool for memory debugging, memory leak detection, and profiling.
  
  - **Variadic function:** A function that accepts a variable numbers or arguments. 
  
  - **Visual Studio Code:** A source-code editor made by Microsoft, providing support for debugging, syntax highlighting, and version control. 

**%Symbols%**

  - **`%c`:** Format specifier for a single character.
  
  - **`%d`:** Format specifier for a signed decimal integer.
  
  - **`%i`:** Format specifier for a signed decimal integer, which can handle different bases in `scanf`.
  
  - **`%s`:** Format specifier for a string.
  
  - **`%%`:** Format specifier for a literal percentage sign.
 

## `_printf`

**Definition:**

`_printf` function is a variedic function that enables formatted output.It allows users to print a formatted string, which can include both plain text and format specifiers. These format specifiers indicate how subsequent arguments should be formatted and displayed, such as integers, characters, strings, and more.

**Why use it?**

`_printf` provides a powerful and flexible tool for producing a formatted output and printing variables that can change.

- **General template (without specifier):** 

```c 
_printf("%specifier", example_data)
``` 

### How to use `_printf` and its specifier?

`_printf` is a powerful tool that allows us to display almost anything on our screen regardless of the size, format or nature of the content (strings, integer, float, etc.). However, each type of data requires a specific format specifier:

 - **Printing a character :** 

`_printf` simply displays a given character

```c 
_printf("%c", 'H')

/** Output: H */ 

``` 

 - **Printing a string:** 

`_printf` displays a variable `char *` holding a string.

```c 

char *name = "Jean Boucher"

_printf("Example printed string: %s", example_string_variable)

/** Output: Example printed string: Jean Boucher */

``` 

 - **Printing a "%":** 

`_printf` displays a `%` without considering it as a specifier.

```c 

_printf("The specifier for printing an integer is: %%d")

/** Output: The specifier for printing an integer is: %d */

``` 

  - **Printing an integer:** 

`_printf` displays an integer or a variable holding an integer as in the given example. 

```c 
int example_int_variable = 10;

_printf("My integer is: %d", example_int_variable)

/** Output: My integer is: 10 */

``` 

  - **Printing an integer (alternative specifier):** 

`_printf` displays an integer or a variable holding an integer as in the given example. While in `_printf`, both `%d` and `%i` produce the same result, they can differ in `scanf` where `%i` can handle different bases (hexadecimal, octal).

```c 
int example_int_variable = 10;

_printf("My integer is: %i", example_int_variable)

/** Output: My integer is: 10 */

``` 

## Manpage `_printf`

A "Manpage" is short for "Manual Page". This is a command scripted to display the manual page of `_printf`, explaining the command and how to use it, while being in bash.

How to use it:

```sh
man _printf
```

And this is a screenshot of what is supposed to be displayed when using that command:

![What is supposed to display on your terminal](https://designshack.net/wp-content/uploads/placehold.jpg "manpag of _printf function in C")

### How we tested our project.

In this section, we are going to focus on the construction of the script itself and especially how we tested it, more than explaining how it works (it has already been explained in previous section).

So, to provide a safe environnement to test our functions without messing everything up, we created a `test` directory, in our local visual code. This directory holds a copy of each file as they were at the time of the developpement of the script, and we kept it updated regularly.

When we needed to test something, we worked in that directory, on our `_printf.c`file in this directory. We adjusted or implemented the changes what we wanted to try, then compiled everything together like this:

```sh
gcc _printf.c main.h main.c _print_specifiers_fonctions.c get_specifier_function.c _putchar.c -o test_print_string
```

to test if it works.

Each time we also updated the `main.c` file, which contains the `int main(void)` function to hold our various test, such as:

```c
_printf("Let's try to printf a simple sentence.\n");
```

To try to simply write the given characters "as-is" without any specifier yet.

We repeated that process for each change or upgrade, until we were satisfied. Then we updated the real files in the `printf` directory, and committed and pushed the changes.

Here is detailed example of one of our test (the first one):


*`main.c` file with a simple line to print without any specifier yet.*
```c
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	 _printf("Let's try to printf a simple sentence.\n");
	return (0);
}
```

*`_printf` file holding an early version of our function that only prints characters "as-is," with a placeholder for where the code for each specifier will be implemented.*

```c
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
	int final_size_to_print;			/** Variable for storing output size. */
	va_list print_argument_list;		/** Unused in this test */
	char *given_argument;


	if (format == NULL)					/** Check if the format is NULL. */
		ERROR;

	while (*format)
	{
		if (*format == '%')
		{
			/**placeholder */
		}

		else
		write(1, format, 1);
		format++;
	}

	va_end(print_argument_list);
	return (final_size_to_print);
}
```
Then we compiled everything together:

*The compilation doesn’t include all flags or files yet, as at this point, it was merely to check if the basic functionality was working.*
```sh
gcc _printf.c main.h main.c -o test_print_string
```

*Testing it!*

```sh
./test_print_string
```

*Expected Output:*

```
Let's try to printf a simple sentence.
```

And *voilà*! Redo the process for each new implementation.

**Testing with Valgrind:**

To ensure there are no memory leaks or other issues, we used Valgrind for testing. Here’s a brief example command to check for memory-related problems:

```sh
valgrind --leak-check=full ./test_print_string
```

This allowed us to verify if our function operated correctly and efficiently, ensuring reliable performance in various scenarios.

### Some tests to try:

Here are some simple test to try using `_printf`

 - **Printing a character :** 

```c 
#include "main.h"

int main (void)
{
	_printf("%c", "H")

	return (0);
}

``` 

 - **Printing a string:** 

```c 
#include "main.h"

int main (void)
{
	char *name = "Jean Boucher"

	_printf("Example printed string: %s", example_string_variable)

	return (0);
}

``` 

 - **Printing a "%":** 

```c 
#include "main.h"

int main (void)
{
	_printf("The specifier for printing an integer is: %%d")

	return (0);
}

``` 

  - **Printing an integer:** 

```c 

#include "main.h"

int main (void)
{

	int example_int_variable = 10;

	_printf("My integer is: %d", example_int_variable)

	return (0);
}

``` 

  - **Printing an integer (alternative specifier):** 

```c 
#include "main.h"

int main (void)
{
	int example_int_variable = 10;

	_printf("My integer is: %i", example_int_variable)

	return (0);
}

```

## Flowchart

![This Flowchar presents how the function `_printf` that we coded worked, in a simple way.](https://designshack.net/wp-content/uploads/placehold.jpg "Flowchart for `_printf` function")


## Conclusion

To conclude, the `_printf` function is as powerful as it is complex to code. Each new "upgrade" (such as adding a new specifier to allow `_printf` to manage even more different types of data) is a challenge to code to match the intended formatted output. However, the function itself is very powerful and flexible tool to display formatted output. 


## Author

Anne-Cécile Besse (Arc)
Xavier Piedallu