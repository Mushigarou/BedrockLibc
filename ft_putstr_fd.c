// Outputs the string 's' to the given file descriptor.

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write (fd, s, ft_strlen(s));
}

// int main()
// {
// 	int fd = open("test.txt", O_CREAT | O_WRONLY);
// 	ft_putstr_fd ("testing this shit", fd);
// }