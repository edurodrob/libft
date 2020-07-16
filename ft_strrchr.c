#include<stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (s[i] != c && i >= 0)
		i--;
	if (s[i] == s[0] && s[i] != c)
		return (NULL);
	else
		return ((char *)s + i);
}

int	main()
{
	printf("%s", ft_strrchr("asdasd4asdasd4asdasd", 'a'));
}