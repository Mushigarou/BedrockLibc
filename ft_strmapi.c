#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*p;

	i = 0;
	i = ft_strlen(s);
	(p = (char *)malloc((i + NULL_CHAR) * sizeof(char)));
	if (p == NULL)
		return (NULL);
	p[i] = '\0';
	i = 0;
	while (s[i])
	{
		p[i] = f(i, s[i]);
		i++;
	}
	return (p);
}
