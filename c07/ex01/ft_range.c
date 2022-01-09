#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	tab = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		*(tab + i) = min;
		min++;
		i++;
	}
	return (tab);
}
