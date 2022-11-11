#include "libft.h"

// Counting the len of the new str

static	size_t	ft_count_lenstr(const char *s, unsigned int start, size_t len)
{
	size_t	i;

	i = start;
	while (s[i] != '\0' && len > 0)
	{
		i++;
		len--;
	}
	return (i);
}

/*Returns a substr from the given string, and allocates with malloc(3) 
based on : where to start? and where to end?*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;

	i = ft_strlen(s);
	if (s == NULL || len <= 0 || start > i)
		return (ft_strdup(""));
	if (i >= (start + len))
		i = len;
	else
		i = ft_count_lenstr(s, start, len);
	ptr = (char *)malloc(i + NULL_CHAR);
	if (!ptr)
		return (ptr);
	s += start;
	i = 0;
	while (len-- > 0 && *s != '\0')
	{
		*ptr++ = *s++;
		i++;
	}
	*ptr = '\0';
	return (ptr - i);
}
// #include <stdio.h>
// int main()
// {
// 	printf("%s\n", ft_substr("hola", 2, 210315));
// 	printf("%zu", ft_strlen(ft_substr("hola", 0, 210315)));

// }