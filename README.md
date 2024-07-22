# Project `printf`

This `README.md` will contain the necessary files for the `printf` project. This is our first group project, and we will be working in pairs. Our team consists of Anne-Cécile Besse (Arc) and Xavier Piedallu. 

To begin with, we decided to devide the work:

- Arc will write the documentation (`REAMDE.md`)

- Xavier will work on the Flowchart. 

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
		- [Some tests to try:](#some-tests-to-try)
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

**A**
  - **Name:** 

**B**

  - **Betty Style:** A style guide for the C programming language ensuring code readibility and consistency 

**C**

  - **Compilation flags:** Options passed to the compiler to control the compilation process. 

**D**

  - **Name:** 

**E**

  - **Name:** 

**F**  

  - **Name:** 

**G**  

  - **GCC (GNU Compiler Collection):** A compiler system supporting various programming languages, including C. 
  
  - **Git:** A version control software used for tracking changes in source code during software development. 

**H**  

  - **Name:** 

**I**  

  - **Name:** 

**J**

  - **Name:** 

**K**

  - **Name:** 

**L**

  - **Name:** 

**M**

  - **Man Page:** Manual documentation for UNIX and UNIX-LIKE operating systems, accessible via the `man` command. 

**N**

  - **Name:** 

**O**  

  - **Name:** 

**P**  

  - **Name:** 

**Q**  

  - **Name:** 

**R**  

  - **README.md:** A markdown file containing information about a project, includings instructions, requirements, and other essential details.

**S**

  - **Name:** 

**T**

  - **Name:** 

**U**

  - **Ubuntu:** A popular Linux distribution based on Debian, known for its user-friendliness. 

**V**

  - **Valgrind:** A programming tool for memory debugging, memory leak detection, and profiling.
  
  - **Visual Studio Code:** A source-code editor made by Microsoft, providing support for debugging, syntax highlighting, and version control. 

**W**

  - **Name:** 

**X**  

  - **Name:** 

**Y**  

  - **Name:** 

**Z**  

  - **Name:**  

## `_printf`

**Definition:**

What is this function, what does it do ?

**Why use it?**

`_printf`is useful for various reason such as...

- **General template (without specifier):** 

```c 
_printf("%specifier", example_data)
``` 

### How to use `_printf` and its specifier?

`_printf` is a powerful tool that allows us to display almost anything on our screen whatever the size, the format or the nature of the content (Strings, integer, float, etc.). Although for each type of data, a specifier is requiered:

  - **Printing an integer:** 

```c 
_printf("%d", example_int_variable)

``` 

 - **Printing an x:** 

```c 
_printf("%", example_x_variable)

``` 

 - **Printing an x:** 

```c 
_printf("%", example_x_variable)

``` 

 - **Printing an x:** 

```c 
_printf("%", example_x_variable)

``` 

 - **Printing an x:** 

```c 
_printf("%", example_x_variable)

``` 


## Manpage `_printf`

How to use it:

```sh
man _printf
```

### Some tests to try:

Here are some test to try using `_printf` and testing also the potential memory leaks with Valgrind

- **Printing an integer:**

```c

```

- **Printing an :**

```c

```

- **Printing a :**

```c

```

- **Printing a :**

```c

```

- **Printing a :**

```c

```



## Conclusion



## Author

Anne-Cécile Besse (Arc)
Xavier Piedallu