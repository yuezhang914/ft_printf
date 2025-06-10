# ft_printf

> A simplified reimplementation of the standard C `printf` function.  
> 🚧 **Only the mandatory part is implemented.** Bonus flags, width, precision, and alignment are not included.

---

## 📌 Project Overview

This project is part of the 42 school curriculum. The goal is to write a simplified version of the `printf` function in C, capable of formatting and printing data to the standard output using variadic arguments.

The output must behave identically to the standard `printf` for the supported conversion specifiers.

---
How It Works

The ft_printf() function iterates over the format string.

When it sees a %, it calls handle_format() from dispatch.c, which routes to the correct print_xxx() function.

All arguments are processed using va_list from <stdarg.h>.

Each print_xxx() returns the number of characters printed.

The total character count is returned at the end, just like standard printf().

---
How to test:

Copy main.c from test/ to ft_printf/, compile and run:

make

cc main.c libftprintf.a libft/libft.a -I. -Ilibft

./a.out


## ✅ Supported Format Specifiers

| Specifier | Description                         |
|-----------|-------------------------------------|
| `%c`      | Character                           |
| `%s`      | String                              |
| `%d` / `%i` | Signed decimal integer            |
| `%u`      | Unsigned decimal integer            |
| `%x`      | Unsigned hexadecimal (lowercase)    |
| `%X`      | Unsigned hexadecimal (uppercase)    |
| `%p`      | Pointer address (with `0x` prefix)  |
| `%%`      | Literal `%` character               |

---

## 🛠️ Project Structure

```text
ft_printf/
├── ft_printf.c          # Core logic: parses format string and dispatches output
├── dispatch.c           # Handles conversion specifier routing
├── print_char.c         # Handles %c
├── print_string.c       # Handles %s
├── print_decimal.c      # Handles %d and %i
├── print_unsigned.c     # Handles %u
├── print_hex.c          # Handles %x and %X
├── print_pointer.c      # Handles %p
├── print_percent.c      # Handles %%
├── utils_write.c        # Helper write functions 
├── utils_num.c          # Base conversion and number-to-string tools
├── ft_printf.h          # Header file for all declarations
├── Makefile             # Builds libftprintf.a
└── libft/               # A full copy of my libft project (sources + Makefile)
