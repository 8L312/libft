/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c   hihi                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:31:38 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/26 13:57:08 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sc;
	unsigned char	i;

	sc = (unsigned char *)s;
	i = (unsigned char)c;
	while (*sc != i && n > 0)
	{
		sc ++;
		n --;
	}
	if (*sc == i && n != 0)
		return ((void *)sc);
	else
		return (NULL);
}
/*
int main()
{
	char	*s = "JUDAS";
	int		c = 65;

	printf("%s\n", memchr(s, c, 39));
	printf("%s\n", ft_memchr(s, c, 39));
	return (0);
}*/
