#include <stdio.h>
#include <string.h>
#include <xlocale.h>

char	*ft_strnstr(char *str, char *to_find, int len)
{
	int i;
	int j;

	i = 0;
	if (to_find[i] == '\0')
		return (&str[i]);
	while (str[i])
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j] && (i + j) < len)
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

int	main()
{
	printf("%s", strnstr("asd 2asd1 asd", "asd 2", 4));
	printf("\n");
	printf("%s", ft_strnstr("asd 2asd1 asd", "asd 2", 4));
}
