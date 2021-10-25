/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:22:11 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/25 15:46:55 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned long	i;
	unsigned long	n;

	i = 0;
	n = 0;
	while (dst[i] != '\0' && dstsize != 0)
	{
		i ++;
		dstsize --;
	}
	while (src[n] != '\0' && dstsize != 0)
	{
		dst[i] = src[n];
		i ++;
		n ++;
		dstsize --;
	}
	dst[i] = '\0';
	n = ft_strlen((char *)src) + ft_strlen(dst);
	return (n);
}
/*
int main()
{
	char *dst;
	char *src;

	src = "DESBACH";
	dst = "MDR";
	printf("%d\n", ft_strlcat(dst, src, 10));
	return (0);
}*/
