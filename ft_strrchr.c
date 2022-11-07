#include "libft.h"
// Unicode (unsigned char)

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	if (!*s)
		return (NULL);
	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + i);
	while (i >= 0)
	{
		i--;
		if (s[i] == (unsigned char)(c))
			return ((char *)(s + i));
	}
	return (NULL);
}
