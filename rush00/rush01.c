void	ft_putchar(char l);

void	rush01(int x, int y)
{
	int	p;
	int	r;

	r = 1;
	while (r <= y && x > 0)
	{
		p = 1;
		while (p <= x)
		{
			if ((p == 1 && r == 1) || (p == x && r == y && p != 1 && r != 1))
				ft_putchar('/');
			else if ((p == x && r == 1) || (p == 1 && r == y))
				ft_putchar('\\');
			else if ((p == 1) || (p == x) || (r == 1) || (r == y))
				ft_putchar('*');
			else
				ft_putchar(' ');
			p++;
		}
		ft_putchar('\n');
		r++;
	}
}
