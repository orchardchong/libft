This project has been created as part of the 42 curriculum by ochong.

# Description
As part of the 42 curriculum, I built Libft, which is a custom C library featuring 43 recreated standard functions. The goal was to build a reusable codebase for future projects while mastering core C concepts, specifically pointers, memory allocation, and function pointers.

# Instructions

### To create libft.a
* `__make__`

### To remove object files
Clear all object files:
* `__make clean__`	
Clear all object files and libft.a:
* `__make flcean__`

### To remake the library
* `__make re__` 

### Resources
* https://stackoverflow.com/
* https://www.geeksforgeeks.org/
* https://www.educative.io/
* https://pythontutor.com/
* AI usage: 
Using AI is mainly helping me to explain what is the functions for, and what does each line of the code mean.

### Functions

* ft_isdigit — Evaluates whether a given character is a decimal digit (0 through 9).
* ft_isalnum — Determines if a character is alphanumeric (either a letter or a digit).
* ft_isascii — Verifies if a character falls within the standard ASCII character set (0-127).
* ft_isprint — Checks whether a character is printable, including the space character.
* ft_strlen  — Calculates and returns the total number of characters in a string, excluding the null terminator.
* ft_toupper — Transform a lowercase character to uppercase.
* ft_tolower — Transform an uppercase character to lowercase.
* ft_strncmp — Compares up to n bytes of two strings, returning the difference between the first unmatched characters.
* ft_strlcpy — Safely copies a string from source to destination, guaranteeing null-termination, and returns the length of the source string.
* ft_strlcat — Copies n bytes from src to dest while ensuring NULL-terminated. 
* ft_strchr  — Locates the first occurrence of a specific character within a string and returns a pointer to it.
* ft_strrchr — Locates the last occurrence of a specific character within a string and returns a pointer to it.
* ft_strnstr — Searches for a substring in a big string within the n bytes of size. 
* ft_memset  — Fills a specified block of memory with a constant byte value for n bytes.
* ft_memchr  — Scans the first n bytes of a memory block for a specific character, returning a pointer to the match.
* ft_memcpy  — Copies n bytes of data from src to dest.
* ft_memcmp  — Copies exactly n bytes from a source memory area to a destination memory area.
* ft_memmove — Safely copies n bytes from source to destination, handling cases where the memory blocks overlap.
* ft_bzero   — Erases the data in a specified memory block by replacing zero.
* ft_atoi    — Converts ASCII characters into an integer representation.
* ft_strdup  — Allocates dynamic memory and creates an exact duplicate of the provided string.
* ft_calloc  — Allocates memory for an array of elements and zeroes out the entire allocated space.
* ft_substr  — Extracts and returns a newly allocated substring, beginning at a specific index and end by a given length.
* ft_strjoin — Concatenates two strings together, creating and returning a brand-new dynamically allocated string.
* ft_strtrim — Eliminate a designated set of characters from both the beginning and the end of a string, returning the newly allocated result.
* ft_split — Eliminate a designated set of characters in a string, and put each substring into a specific memory.
* ft_itoa — Transforms an integer value into its corresponding string representation using dynamic allocation.
* ft_strmapi — Go through a string, applying a function to each character to construct a brand-new, modified string.
* ft_striteri — Applies a specified function to every character of a string in place, modifying the original string directly.
* ft_putchar_fd — Outputs a single character to a specified file descriptor.
* ft_putstr_fd — Outputs an entire string to a specified file descriptor.
* ft_putendl_fd — Outputs a string followed by a newline character to a specified file descriptor.
* ft_putnbr_fd — Outputs an integer value to a specified file descriptor.
* ft_lstnew — Allocates and initializes a new standalone linked list node holding the specified data.
* ft_lstsize — Traverses a linked list to calculate and return its total number of nodes.
* ft_lstlast — Iterates through a linked list and returns a pointer to the very last node.
* ft_lstdelone — Safely frees a single list node and destroys its contents using a provided cleanup function.
* ft_lstclear — Traverses the entire linked list, destroying each node and freeing all associated memory.
* ft_lstiter — Walks through a linked list, applying a designated function to the data inside every single node.
* ft_lstmap — Duplicates an entire linked list by applying a transformation function to each node's cargo, safely handling allocation failures.
* ft_lstadd_back — Attaches a newly created node to the very end of an existing linked list.
* ft_lstadd_front — Inserts a new node at the very front of an existing linked list, safely updating the head pointer.