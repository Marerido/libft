# Functions
## ft_isalpha
Checks if the given character is an alphabetic character

## ft_isdigit
Checks if the given character is a numerical character

## ft_isalnum
checks wheter the given character is numerical or alphabetic

## ft_isascii
check if the given character is in the range of the ascii code (0-127)

## ft_isprint
checks if the given character is printable. Means, if it between 32-126.

## ft_strlen
checks how many character a given string has

## ft_memset 
Fill a given buffer with the wanted character. 
'''
void	*ft_memset(void *pointer, int value, size_t count)
'''
Here a pointer indicats the size of the buffer, int value is equivalent with the character in decimal code and count indicats how much buffer the character should be using

## ft_bzero
set a given amount of memory of a pointer to zero  

## ft_memcpy
copies a given source memory to a destination memory

## ft_memmove
quite similar to ft_memcpy but here we handle overlap. If dest <= src the code will start from the beginning (so from dest[0] and src[0]). If dest >= src we start from the last charakter to the first. 

## ft_strlcpy
copies a source string to the destination but here we handle the buffer of the destination. Such that it is not possible to copy a bigger source file to the destination

## ft_strlcat
append a destination with the source string. The output is the total length of the whole string.

## ft_toupper
convert lowercase letter to uppercase letters by substracting 32 from the ascii code.

## ft_tolower
similar to ft_toupper but here we lower case the uppercase letters.

## ft_strchr
This returns a pointer to the first occurrence of a given character in the string str, or NULL if the character is not found.

## ft_strrchr
similar to ft_strchr but it returns the last occurence of a given character

## ft_strcmp
compares two strings up to a given length

## ft_memchr
similar to ft_strchr but here we are working with memory blocks. Means, this function returns a pointer to the first occurence of a pointer (memory).

## ft_memcmp
similar to ft_strcmp but here we are handling with memories.

## ft_strnstr
This function is looking for a string in another string and returns everything after the first occurence of the to_find string in string.

## ft_atoi
This function takes a given string in which numbers are included and converts this string into the corresponding integer.

## ft_calloc
works like malloc, so it allocate memory but compared to malloc, it sets the allocated memory to zero.

## ft_strdup
This function creates an duplicated string. 

## ft_substr
creates a substring from a given string within a given range. 

# used Functions and Data types
## Functions
## Datatypes
size_t included in library:
'''
#include <stddef.h>
'''
equivalent to unsigned long int
