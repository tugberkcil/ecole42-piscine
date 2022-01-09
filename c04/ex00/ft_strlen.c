int	ft_strlen(char *str)
{
	int	calc;

	calc = 0;
	while (*str != '\0')
	{
		str++;
		calc++;
	}
	return (calc);
}
