#include<stdio.h>

char	*ft_strchr(char *s, int c)
{
	int		i;
	char	a;

	i = 0;
	a = c + '0';
	while (s[i] != a && s[i] != '\0')
		i++;
	return (&s[i]);
}

int	main()
{
	printf("%s", ft_strchr("adfd236dsf44456", 4));
}
