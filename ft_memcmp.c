/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:04:18 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/25 18:07:13 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*sc1;
	const char	*sc2;

	sc1 = s1;
	sc2 = s2;
	while (*sc1 == *sc2 && n > 0)
	{
		sc1 ++;
		sc2 ++;
		n --;
	}
	return (*sc1 - *sc2);
}
/*
int main()
{
	char *s1 = "halo";
	char *s2 = "halz";

	printf("%d\n", memcmp(s1, s2, 5));
	printf("%d\n", ft_memcmp(s1, s2, 5));
	return (0);
}*/
