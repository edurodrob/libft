#include <stdio.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *s = (unsigned char *)str; 
	size_t	i;

	i = 0;

	while (i < n)
	{
		if (s[i] == (unsigned char)c)
			return (s + i);
		i++;
	}
	return (NULL);
}

int	main()
{
	printf("%s", ft_memchr("asereje ja deje", 'j', 15));
}