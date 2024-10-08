/*
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*buff;

	buff = dest;
	while (*buff)
	{
		buff++;
	}
	while (nb-- && *src)
	{
		*buff++ = *src++;
	}
	*buff = '\0';
	return (dest);
}
*/

unsigned int	ft_strlen(char *str)
{
	unsigned int	idx;

	idx = 0;
	while (str[idx])
	{
		idx++;
	}
	return (idx);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*buff;

	buff = dest + ft_strlen(dest);
	while (nb-- && *src)
	{
		*buff++ = *src++;
	}
	*buff = '\0';
	return (dest);
}
