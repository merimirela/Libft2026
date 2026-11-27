*This project has been created as part of the 42 curriculum by <meivanov>.*

# Libft

## Description

**Libft** is a custom C library. The goal of the project is to understand how the standard C functions work by reimplementing them from scratch, then to extend them with extra utilities, so that the resulting `libft.a` can be reused in all my future 42 projects.

The library is organised in three parts, all mandatory:

1. **Libc functions**: reimplementations of standard functions, with the same prototypes and behaviour as the originals (see `man`) but with an `ft_` prefix.
2. **Additional functions**: string and output helpers that are either not in the libc or exist in a different form.
3. **Linked list functions**: a small API built around the `t_list` structure.

### Library content

**Part 1: Libc functions**

| Category | Functions |
|---|---|
| Character classification (return `1` or `0`) | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| Character conversion | `ft_toupper`, `ft_tolower` |
| String | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_atoi` |
| Memory | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp` |
| Allocation (uses `malloc`) | `ft_calloc`, `ft_strdup` |

`ft_calloc` follows the subject rule: if `nmemb` or `size` is `0`, it returns a unique pointer that can be passed to `free()`.

**Part 2: Additional functions**

| Function | Description |
|---|---|
| `ft_substr` | Allocates and returns a substring of `s`, starting at `start`, with a maximum length `len`. |
| `ft_strjoin` | Allocates and returns the concatenation of `s1` and `s2`. |
| `ft_strtrim` | Allocates and returns a copy of `s1` with the characters from `set` removed from the beginning and the end. |
| `ft_split` | Allocates and returns a `NULL`-terminated array of strings, obtained by splitting `s` with the delimiter `c`. |
| `ft_itoa` | Allocates and returns a string representing an integer (negative numbers handled). |
| `ft_strmapi` | Applies `f(index, char)` to each character and returns the newly allocated resulting string. |
| `ft_striteri` | Applies `f(index, &char)` to each character of `s` in place. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

**Part 3: Linked list**

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new node with the given content; `next` is `NULL`. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstsize` | Counts the nodes of the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstdelone` | Frees a node's content with `del`, then frees the node (not the next one). |
| `ft_lstclear` | Deletes and frees a node and all its successors, then sets the list pointer to `NULL`. |
| `ft_lstiter` | Applies `f` to the content of each node. |
| `ft_lstmap` | Builds a new list by applying `f` to each node's content; uses `del` to clean up if an allocation fails. |

### Technical choices

- Written in C, following the 42 Norm.
- Every `.c` file compiles with `-Wall -Wextra -Werror` using `cc`.
- No global variables; helper functions are `static`.
- The library is built with `ar` (no `libtool`) and `libft.a` is created at the root of the repository.
- Heap memory is always freed when needed, and no function crashes unexpectedly (except for undefined behaviour).
- The `restrict` qualifier is not used in prototypes and `-std=c99` is not used.

## Instructions

### Compilation

From the root of the repository:

```bash
make        # builds libft.a
make clean  # removes the object files
make fclean # removes the object files and libft.a
make re     # fclean + all
```

The Makefile provides the rules `NAME` (`libft.a`), `all`, `clean`, `fclean` and `re`, and does not relink unnecessarily.

### Usage

Include the header in your code and link against the library:

```c
#include "libft.h"
```

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

### Testing against the system functions

Some functions (`strlcpy`, `strlcat`, `bzero`) are not part of glibc by default. To compare with the system versions on a glibc system, include `<bsd/string.h>` in your test program and compile with `-lbsd`.

### Repository layout

```
.
├── Makefile
├── README.md
├── libft.h
└── ft_*.c
```

All files are at the root of the repository, as required.

## Resources

### References

- [My own Libft previous project] (different approach) https://github.com/merimirela/Libft
- `man 3` pages of the reimplemented functions (`man 3 strlen`, `man 3 memmove`, `man 3 strlcpy`, ...)
- [Francinette for additional testing] (https://github.com/xicodomingues/francinette)
- [ISO/IEC 9899:201x] https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf
- [Memset | CPPreference]https://en.cppreference.com/c/string/byte/memset
- [The C Programming Language](https://en.wikipedia.org/wiki/The_C_Programming_Language), Kernighan & Ritchie
- [GNU Make manual](https://www.gnu.org/software/make/manual/make.html)
- `man 1 ar`: creating static libraries
- [Valgrind documentation](https://valgrind.org/docs/manual/manual.html): checking for memory leaks
- The 42 Norm (available on the intranet)

### Use of AI

> AI was used do deepen some concepts, not to write the project for me:

- generate visualisations;
- To help me study and understand the linked list functions (`ft_lstnew`, `ft_lstadd_front` and the rest of the list API): I built a study guide in PDF form, with one chapter per function.
- To clarify concepts and reading of the subject.
- To suggest ideas for edge cases to test.

The code submitted in this repository was written, tested and is understood by me, and I can explain every function during evaluations and project presentations.
