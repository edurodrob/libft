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

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  i;

if (!dst || !src)
return (0);
    i = 0;
    while (src[i])
i++;
    if (dstsize == 0)
return (i);
    i = 0;
    while (src[i] && i < dstsize - 1)
    {
dst[i] = src[i];
i++;
    }
    dst[i] = '\0';
    i = 0;
    while (src[i])
i++;
return (i);
} 