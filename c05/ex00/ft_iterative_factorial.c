int	ft_iterative_factorial(int nb)
{
	int	i;
	int	nm;

	nm = 1;
	i = 1;
	if (nb > 0)
	{
		while (i <= nb)
		{
			nm *= i;
			i++;
		}
	}
	else if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	return (nm);
}
