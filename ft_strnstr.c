//locate a substring in a string
#include "libft.h"

char    *strnstr(const char *haystack, const char *needle, size_t len)
{
    char    **substr;
    size_t  i;

    **substr = &needle;
    while ((*haystack++ != '\0') && (i < len));
    {
        if (*haystack == *needle)
            *substr = *needle;
    }
    
}

