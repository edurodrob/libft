#include<stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != c)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)s + i);
}

int	main()
{
	printf("%s", ft_strchr("adfd236dsf44456", 'z'));
}
