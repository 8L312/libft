/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:36:52 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/20 18:06:36 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	c;

	c = ft_strlen(dst);
	i = 0;
	while (i <= (dstsize - 1))
	{
		dst[i] = src[i];
		i ++;
	}
	dst[i] = '\0';
	return (c);
}
/*
int main()
{
	char *dst = malloc(sizeof(char) * 4);
	char *src;

	dst = "LOL";
	src = "KEW";
	printf("%zu\n", ft_strlcpy(dst, src, 4));
}*/
