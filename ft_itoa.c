/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:01:22 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/25 18:35:03 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	caracounter(int n)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	if (n < 0)
		i = (-n);
	else
		i = n;
	while (i > 9)
	{
		i /= 10;
		c += 1;
	}
	return (c);
}

static int	power(int nb, int pow)
{
	int	a;

	a = nb;
	if (pow < 0)
		return (0);
	else if (pow == 0)
		return (1);
	else
		return (a * (power(nb, (pow - 1))));
}

char	*ft_itoa(int n)
{
	int		i;
	int		a;
	char	*s;

	s = NULL;
	i = 0;
	a = caracounter(n);
	if (n < 0)
	{
		s = malloc(sizeof(char) * (a + 3));
		s[i] = 45;
		i ++;
		n *= -1;
	}
	else
		s = malloc(sizeof(char) * (a + 2));
	a = power(10, a);
	while (a >= 1)
	{
		s[i] = (((n / a) % 10) + 48);
		a /= 10;
		i ++;
	}
	s[i] = '\0';
	return (s);
}
/*
int	main(void)
{
	int	n;

	n = 1234;
	printf("%s\n", ft_itoa(n));
	return (0);
}*/
