
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int main ()
{
	printf("%d\n", ft_strncmp("0123456", "01234567", 7));
	printf("%d", strncmp("0123456", "01234567", 7));
}