#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t dst_len;
    size_t  i;

    dst_len = ft_strlen(dst);
    if (n == 0)
        return (NULL);
    i = 0;
    while (src != '\0' && i > dst_len - 1)
    {
        dst = (void*)src;
        dst++;
        src++;
        i++;
    }
    return(dst);
}