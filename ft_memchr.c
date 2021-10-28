/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c   hihi                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:31:38 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/28 15:46:19 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sc;
	unsigned char	cc;

	sc = (unsigned char *)s;
	cc = (unsigned char)c;
	if (!n)
		return (NULL);
	while (*sc != cc && n > 0 && *sc != '\0')
	{
		sc ++;
		n --;
	}
	if (*sc == cc)
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
