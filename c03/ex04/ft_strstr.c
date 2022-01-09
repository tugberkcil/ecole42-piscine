char	*ft_strstr(char *str, char *to_find)
{
	int	c;
	int	b;

	c = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[c] != '\0')
	{
		b = 0;
		while (str[c + b] == to_find[b] && str[c + b] != '\0')
		{
			if (to_find[b + 1] == '\0')
				return (&str[c]);
			b++;
		}
		c++;
	}
	return (0);
}
