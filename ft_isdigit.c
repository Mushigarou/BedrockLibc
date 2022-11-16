#include "libft.h"
//Checks whether the character passed is between '0' && '9'
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// int main()
// {
// 	printf("%d\n", ft_isdigit('1'));
// 	printf("%d", isdigit('1'));
// }
