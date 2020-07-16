#include<stdio.h>
#include <string.h>

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

int main()
{
    char dst[]="asdasd";
	char dst2[]="asdasd";

    printf("%u\n", ft_strlcpy(dst, "0123456789", 6));
    printf("%lu", strlcpy(dst2, "0123456789", 6));
}

