#include <unistd.h>

void	ft_putchar(char l)
{
	write(1, &l, 1);
}
