#include <stdio.h>
#include <string.h>
// #include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dest;
	char	*source;

	i = 0;
	dest = (char *)dst;
	source = (char *)src;
	if (dest > source)
	{
		while (len--)
			dest[len] = source[len];
	}
	else if (dest < source)
		memcpy(dst, src, len);
	return (dst);
}

int	main()
{
	char	dst[50]="abcdef";

	printf("%s", ft_memmove(dst+3, dst+1, 3));

	char	dst2[50]="abcdef";

	printf("\n%s", memmove(dst2+3, dst2+1, 3));
}