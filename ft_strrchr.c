#include<stdio.h>

char	*ft_strrchr(char *s, int c)
{
	int		i;
	int		j;
	char	a;

	i = 0;
	j = 0;
	a = c + '0';
	while (s[i] != '\0')
		i++;
	while (s[i] != a)
		i--;
	if (s[i] == s[j] && s[i] != a)
		return ('\0');
	else
		return (&s[i]);
}

int	main()
{
	printf("%s", ft_strrchr("4adfd423464dsf56", 8));
}