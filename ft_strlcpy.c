#include<stdio.h>

char *ft_strlcpy(char *dst, char *src, int dstsize)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';

	return(dst);
}

int main ()
{
	char	dst[]="12345";
	printf("%s", ft_strlcpy(dst, "Pruuuuuuuebaa", 5));
}
