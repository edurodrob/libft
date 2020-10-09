#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
		return (str1[i] - str2[i]);
		i++;
	}
	return(0);
}

int	main()
{
	printf("%d\n", ft_memcmp("", "", 15));
	printf("%d", memcmp("", "", 15));
}