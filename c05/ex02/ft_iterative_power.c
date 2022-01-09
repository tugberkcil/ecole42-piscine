int	ft_iterative_power(int nb, int power)
{
	int	c;
	int	i;
	int	d;

	i = nb;
	c = 1;
	d = 1;
	while (c <= power)
	{
		d *= nb;
		c++;
	}
	if (power < 0)
		return (0);
	if ((power == 0 && nb == 0) || (power == 0))
		return (1);
	return (d);
}
