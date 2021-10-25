/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:24:45 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/20 18:04:02 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dstc;
	const char	*srcc;

	dstc = dst;
	srcc = src;
	while (n > 0)
	{
		*dstc = *srcc;
		dstc ++;
		srcc ++;
		n --;
	}
	return (dst);
}
/*
int main()
{
	char	dst[9] = "00000000";
	char	dstc[9] = "00000000";
	char	src[9] = "JUDASLOL";
	printf("%s\n", ft_memcpy(dst, src, 5));
	printf("%s\n", memcpy(dstc, src, 5));
	return (0);
}*/