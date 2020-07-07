#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int s;
	int	c;

	i = 0;
	s = 1;
	c = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s = s * (-1);
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		c = c * 10 + (str[i] - 48);
		i++;
	}
	return (s * c);
}

int main ()
{
	printf("%d", ft_atoi(" --++++++++++++---+--+12399asd88984ab567"));
}