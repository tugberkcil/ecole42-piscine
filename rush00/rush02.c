void	ft_putchar(char l);

void	rush02(int x, int y)
{
	int		c;
	int		r;

	r = 1;
	while (r != y + 1)
	{
		c = 1;
		while (c != x + 1)
		{
			if ((r == 1 && c == 1) || (r == 1 && c == x))
				 ft_putchar ('A');
			else if ((r == y && c == x) || (r == y && c == 1))
				ft_putchar ('C');
			else if ((r == 1) || (r == y) || (c == 1) || (c == x))
				ft_putchar ('B');
			else
				ft_putchar (' ');
			c++;
		}
		ft_putchar ('\n');
		r++;
	}
}
