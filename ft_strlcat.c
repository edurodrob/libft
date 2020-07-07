#include<stdio.h>

char *ft_strlcat(char *dst, char *src, int dstsize)
{
	int	i;

	i = 0;
	while(dst[i] != '\0' && i < dstsize)
	{
		i++;
	}
	int j;

	j = 0;
	while(i < dstsize && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';

	return (dst);
}

int main()
{
	char	dst[20]="12345678";
	printf("%s", ft_strlcat(dst, "abcdef", 12));
}