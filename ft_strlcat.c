#include "libft.h"
#include <stddef.h>
//concatenate
// the initial length of dst plus the length of src
// the return value is >= dstsize, the output string has been truncated.
//  It is the caller's responsibility to handle this.		
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = -1;
	if (dstsize < len_dst)
		return (dstsize + len_src);
	while ((*src != '\0') && ++i < dstsize - len_dst)
		*(dst++ + len_dst) = *src++;
	return (*(dst + len_dst) = '\0', len_dst + len_src);
}
