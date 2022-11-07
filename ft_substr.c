// Allocates (with malloc(3)) and returns a substring from the string ’s’.
// The substring begins at index ’start’ and is of maximum size ’len’.
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	size_t			len_s;
	unsigned int	i;

	len_s = ft_strlen(s);
	if (len_s >= len + start)
		ptr = (char *)malloc(len + NULL_CHAR);
	else
		return (ft_strdup(""));
	if (!ptr)
		return (ptr);
	s += start;
	i = 0;
	while (len-- && s)
	{
		*ptr++ = *s++;
		i++;
	}
	*ptr = '\0';
	return (ptr - i);
}
