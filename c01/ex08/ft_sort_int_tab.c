#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	max;
	int	c;

	c = 0;
	i = 0;
	max = tab[i];
	while (i < size)
	{
		if (max < tab[i])
		{
			max = tab[i];
			c = i;
		}
		i++;
	}
	tab[c] = tab[size - 1];
	tab[size - 1] = max;
	if (size > 1)
		ft_sort_int_tab(tab, size - 1);
}
