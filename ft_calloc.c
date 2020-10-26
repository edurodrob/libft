/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erodrigu <erodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 19:03:38 by erodrigu          #+#    #+#             */
/*   Updated: 2020/10/26 19:03:40 by erodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*new;

	if (count == 0 || size == 0)
		return (NULL);
	new = malloc(size * count);
	ft_memset(new, 0, count * size);
	return (new);
}
