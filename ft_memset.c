#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *str;

	str = (unsigned char*)b;
	i = 0;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

int		main(void)
{
	char	str[50] = "abcdef";

	printf("%s", ft_memset(str, 'a', 6));
}
