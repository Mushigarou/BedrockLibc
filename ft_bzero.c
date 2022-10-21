#include "libft.h"
// write zeroes to a byte string

void ft_bzero(void *s, size_t n)
{
//casting to char* since 0 and '\0' are characters
    while (n > 0 && *(char*)s != '\0')
    {
        *(char*)s = 0;
        s++;
        n--;
    }
    return;
}