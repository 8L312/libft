/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:33:05 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/21 15:09:24 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*dstc;
	const char	*srcc;

	dstc = dst;
	srcc = src;
	if (dst <= src)
	{
		while (n > 0)
		{
			*dstc = *srcc;
			dstc ++;
			srcc ++;
			n --;
		}
	}
	else
	{
		while (n > 0)
		{
			*(dstc + n) = *(srcc + n);
			n --;
		}
	}
	return (dst);
}
/*
int main()
{
	char src[6] = "judas";
	char dst[6] = "00000";
	char dstc[6] = "00000";
	printf("%s\n", ft_memmove(dst, src, 3));
	printf("%s\n", memmove(dstc, src, 3));
	return (0);
}*/
