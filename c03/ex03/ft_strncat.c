char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (dest[i] != '\0')
		i++;
	while ((src[c] != '\0' || dest[i] != '\0') && c < nb)
	{
		dest[i] = src[c];
		c++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
