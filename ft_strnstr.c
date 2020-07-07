#include <stdio.h>
#include <string.h>
#include <xlocale.h>

int	main()
{
	printf("%s", strnstr("asd asd asd", "asd asd assd", 14));
}

char *strnstr(char *pajar, char *aguja, int len)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (pajar[i] != '0')
	{
		if (pajar[i] == aguja[j])
		{

		}
		i++;
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (to_find[i] == '\0')
		return (&str[i]);
	while (str[i])
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
