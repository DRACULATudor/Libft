# Libft Project Overview

## Introduction

The **Libft** project is one of the foundational exercises in C programming, where you will create your own custom C standard library. By implementing key functions that are part of the standard C library (like `malloc`, `free`, `strlen`, `strcpy`, and many others), you gain a deeper understanding of how these functions work internally and learn essential C programming skills, including memory management, pointer manipulation, and string handling.

The goal of the project is to help you develop a personal library (`libft.a`) of commonly used functions, which you will later use in other projects.

## Compilation

```
make
```
Or, if there is no Makefile:
```
gcc -Wall -Wextra -Werror + all files which have .c as extenstion
```
Run the program:
```
./exec_name(check Makefile)
```

## Topics Covered

### 1. **String Manipulation Functions**
   - **ft_strlen**: Returns the length of a string.
   - **ft_strdup**: Duplicates a string by allocating memory and copying the contents.
   - **ft_strcpy**: Copies one string to another.
   - **ft_strncpy**: Copies a specified number of characters from one string to another.
   - **ft_strcat**: Concatenates two strings.
   - **ft_strncat**: Concatenates a specified number of characters from one string to another.
   - **ft_strchr**: Searches for the first occurrence of a character in a string.
   - **ft_strrchr**: Searches for the last occurrence of a character in a string.
   - **ft_strstr**: Finds the first occurrence of a substring in a string.

### 2. **Memory Management Functions**
   - **ft_memset**: Fills a block of memory with a particular value.
   - **ft_bzero**: Sets a block of memory to zero.
   - **ft_memcpy**: Copies a specified number of bytes from one memory area to another.
   - **ft_memmove**: Moves a block of memory from one location to another (handles overlapping memory regions).
   - **ft_memchr**: Searches for a character in a block of memory.
   - **ft_memcmp**: Compares two blocks of memory.

### 3. **Utility Functions**
   - **ft_isdigit**: Checks if a character is a digit.
   - **ft_isalpha**: Checks if a character is an alphabetic letter.
   - **ft_isalnum**: Checks if a character is alphanumeric.
   - **ft_isascii**: Checks if a character is an ASCII character.
   - **ft_isprint**: Checks if a character is printable.
   - **ft_toupper**: Converts a character to uppercase.
   - **ft_tolower**: Converts a character to lowercase.

### 4. **Linked List Functions**
   - **ft_lstnew**: Creates a new linked list node.
   - **ft_lstadd_front**: Adds a node at the front of a linked list.
   - **ft_lstadd_back**: Adds a node at the end of a linked list.
   - **ft_lstsize**: Returns the size (number of nodes) of a linked list.
   - **ft_lstlast**: Returns the last node of a linked list.
   - **ft_lstdelone**: Deletes a node from the list.
   - **ft_lstclear**: Clears the entire list.
   - **ft_lstiter**: Iterates through a linked list and applies a function to each node.
   - **ft_lstmap**: Applies a function to each node in the list and creates a new list with the results.

### 5. **Error Handling Functions**
   - **ft_putchar_fd**: Writes a character to a file descriptor.
   - **ft_putstr_fd**: Writes a string to a file descriptor.
   - **ft_putendl_fd**: Writes a string followed by a newline to a file descriptor.
   - **ft_putnbr_fd**: Writes an integer to a file descriptor.

### 6. **Additional Functions**
   - **ft_atoi**: Converts a string to an integer.
   - **ft_itoa**: Converts an integer to a string.
   - **ft_strmapi**: Applies a function to each character of a string, producing a new string.
   - **ft_striteri**: Applies a function to each character of a string, modifying the string in place.
   - **ft_strjoin**: Joins two strings into a new string.
   - **ft_strtrim**: Removes leading and trailing spaces from a string.
   - **ft_split**: Splits a string into an array of strings, using a delimiter.
   - **ft_strndup**: Duplicates a string up to a specified number of characters.

## Conclusion

The libft project is an excellent opportunity to learn and practice the core skills of C programming, especially memory management and string handling. By the end of this project, you'll have your own custom library of C functions that can be reused across other projects. The understanding of low-level operations gained here will also be helpful in optimizing your code and working on future C projects.
