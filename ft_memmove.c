/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erodrigu <erodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 19:18:55 by erodrigu          #+#    #+#             */
/*   Updated: 2020/10/26 19:19:13 by erodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;

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

int		main()
{
	char	dst[50]="abcdef";

	printf("%p", ft_memmove(dst+3, dst+1, 3));

	char	dst2[50]="abcdef";

	printf("\n%p", memmove(dst2+3, dst2+1, 3));
}
