#include <stdio.h>
#include <string.h>
// #include "libft.h"

void	*ft_memcpy(void dst, const void src, size_t n)
{
	size_t		i;
	char		*dest;
	const char	*source;

	dest = (char *)dst;
	source = (char *)src;
	i = 0;

	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}

int	main()
{
	char	dst[50]="I am going from Dheli to Ghorakpur";

	printf("%s", ft_memcpy(dst+11, dst+5, 29));

	char	dst2[50]="I am going from Dheli to Ghorakpur";

	printf("\n%s", memcpy(dst2+11, dst2+5, 29));
}
