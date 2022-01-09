int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (c < n)
	{
		if (s1[c] != s2[c])
			return (s1[c] - s2[c]);
		else if (s1[c] == '\0')
			return (0);
		c++;
	}
	return (0);
}
