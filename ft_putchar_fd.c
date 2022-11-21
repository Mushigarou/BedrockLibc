// Outputs the character 'c' to the given file descriptor

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

// int	main()
// {
// 	// char	*buff = 'c';
// 	// int		r;`

// 	// int fd = open("test.c", O_RDONLY);
// 	// char *buff;
// 	// read(fd, buff, 1);
// 	// printf("%s\n", buff);
// }
