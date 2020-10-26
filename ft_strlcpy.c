/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erodrigu <erodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 19:26:55 by erodrigu          #+#    #+#             */
/*   Updated: 2020/10/26 20:55:20 by erodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
// FATAL CORREGIR ENTERA 
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';

	return (dst);
}

int		main()
{
    char dst[]="asdasd";
	char dst2[]="asdasd";

    printf("%s\n", ft_strlcpy(dst, "0123456789", 6));
    printf("%lu", strlcpy(dst2, "0123456789", 6));
}
