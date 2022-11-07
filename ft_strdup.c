//save a copy of a string
#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*ptr1;
	size_t	s1_len;

	s1_len = ft_strlen(s1);
	ptr1 = (char *)malloc(s1_len + NULL_CHAR);
	if (ptr1 == (void *)0)
		return (ptr1);
	while (*s1 != '\0')
		*ptr1++ = *s1++;
	*ptr1 = '\0';
	return (ptr1 - s1_len);
}
