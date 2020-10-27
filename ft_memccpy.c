/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erodrigu <erodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 19:13:11 by erodrigu          #+#    #+#             */
/*   Updated: 2020/10/26 19:15:28 by erodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = 0;

	while (i < n)
	{
		dest[i] = source[i];
		if (source[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}

int		main()
{
	char	dst[50]="sobreescribir";
	char	src[50]="bcdeafg";

	printf("%p", ft_memccpy(dst, src, 'g', 7));

	char	dst2[50]="sobreescribir";
	char	src2[50]="bcdeafg";

	printf("\n%p", memccpy(dst2, src2, 'g', 7));
}
