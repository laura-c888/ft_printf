# ft_printf

*This project was realized by lchehbi.*

## Description

`ft_printf` is a project at **42 School** that consists of recoding the famous C library function `printf`. 

The goal is to understand how variadic functions work in C and to implement a versatile formatting tool. This implementation handles various conversion specifiers and returns the total number of characters printed, just like the original `printf`.

**Return Value**: Upon successful return, `ft_printf` returns the number of characters printed (excluding the null byte used to end output to strings). If an output error is encountered, a negative value is returned.

## Supported Conversions

This implementation of `ft_printf` supports the following format specifiers:

- `%c` : Prints a single character.
- `%s` : Prints a string.
- `%p` : Prints a void * pointer argument in hexadecimal format.
- `%d` : Prints a decimal (base 10) number.
- `%i` : Prints an integer in base 10.
- `%u` : Prints an unsigned decimal (base 10) number.
- `%x` : Prints a number in hexadecimal (base 16) lowercase format.
- `%X` : Prints a number in hexadecimal (base 16) uppercase format.
- `%%` : Prints a percent sign.

## Getting Started

### Compilation

To compile the library, simply run the following command in the project root:

```bash
make
```

This will generate the `libftprintf.a` library file.

### Usage

To use `ft_printf` in your own project, include the header file and link the library during compilation:

```c
#include "ft_printf.h"

int main()
{
    ft_printf("Hello %s!\n", "world");
    ft_printf("Number: %d\n", 42);
    return (0);
}
```

Compile your code with:
```bash
gcc main.c libftprintf.a -o my_program
```

## Project Structure

- `ft_printf.c`: The main entry point and the parsing logic.
- `ft_printf.h`: The header file containing prototypes.
- `ft_fonctions_1.c` & `ft_fonctions_2.c`: Utility functions and conversion handlers.
- `Makefile`: Automates the compilation process.

## Testing

This project has been thoroughly tested using custom test cases in the `TESTS/` directory, as well as community testing frameworks like `printfTester`. 
Feel free to dive into those directories to run the test suites and verify the stability of the conversions!

## 42 Norm Compliance

This codebase strictly adheres to the **42 School Norm**. This means:
- No `for`, `do...while`, `switch`, `case`, or `goto` statements.
- Maximum 25 lines per function.
- Maximum 5 functions per file.
- Strict variable declaration and memory leak prevention.

## Resources & Acknowledgements

- **Information Sources**: `man 3 printf`, `man 3 stdarg`, and standard C documentation were used to grasp variadic functions and formatting rules.
- **AI Usage Disclaimer**: AI was strictly used to help manage and track down bugs. It was **never** used to write any code. The solid knowledge and foundation? You already know bb 😎

---
*42 School Project - 2026*
