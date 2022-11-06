//copy byte string
//The two strings may overlap
#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t tmp;

    tmp = len;
    char *cast_dst = (char *)dst;
    char *cast_src = (char *)src;
    if (dst > src)
        while (len-- > 0)
            cast_dst[len] = cast_src[len];
    else
        ft_memcpy(dst, src, len);
    return (dst);
    
    // if (len == 0 || (src == NULL && dst == NULL))
    //     return (dst);
    // while (len-- > 0)
    //     *(char *)dst++ = *(char *)src++;
    // return (dst - tmp);
}