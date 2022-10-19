//locate a substring in a string
#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    // char    *substr;
    // char    *str;

    size_t  hs;
    size_t  nl;

    char    *hay = (char *)(haystack);
    
    char    *need = (char *)(needle);

    // str = (char *)(haystack);
    if (*need == '\0')
        return (hay);
    if (len == 0)
        return (NULL);
    // substr = (char *)(needle);
    hs = 0;
    while ((haystack != '\0') && (hs < len))
    {
        nl = 0;
         while (haystack[hs] == needle[nl])
         {
            if (needle[nl+1] == '\0' )
                return (hay + hs);
            nl++;
         }
         hs++;
    }
    return (NULL);
}
