/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erodrigu <erodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 19:27:49 by erodrigu          #+#    #+#             */
/*   Updated: 2020/10/26 20:10:23 by erodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main()
{
	printf("%d\n", ft_strncmp("0123456", "01234567", 7));
	printf("%d", strncmp("0123456", "01234567", 7));
}
