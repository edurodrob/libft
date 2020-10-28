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

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*source;

	dest = (char *)dst;
	source = (char *)src;
	if (dst > src)
	{
		while (len--)
			dest[len] = source[len];
	}
	else if (dst < src)
		ft_memcpy(dst, src, len);
	return (dst);
}
