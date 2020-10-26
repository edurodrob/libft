/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erodrigu <erodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 19:10:10 by erodrigu          #+#    #+#             */
/*   Updated: 2020/10/26 20:12:34 by erodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_len(long int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char		*str;
	int			len;
	long int	nbr;

	nbr = n;
	len = ft_get_len(nbr);
	if (!(str = malloc(len * sizeof(char) + 1)))
		return (0);
	str[len--] = '\0';
	if (nbr == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = nbr * -1;
	}
	while (nbr > 0)
	{
		str[len--] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (str);
}
