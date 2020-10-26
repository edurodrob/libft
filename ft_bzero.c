/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erodrigu <erodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 19:02:45 by erodrigu          #+#    #+#             */
/*   Updated: 2020/10/26 20:28:50 by erodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

int		main(void)
{
	char	str[50] = "abcdef";
	char	str2[50] = "abcdef";

	ft_bzero(str, (0));
	printf("%s", str);
	bzero(str2, (0));
	printf("\n%s", str2);
}
