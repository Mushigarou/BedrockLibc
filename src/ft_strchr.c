// locate character in string
#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    if (c == '\0')
    {
        while (!(*s == '\0'))
            s++;
        return ((char *)(s));
    }
    while (*s != '\0')
    {
        if (*s == c)
           return ((char *)(s));
        s++;
    }
    return (NULL);
}
