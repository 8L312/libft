/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:38:12 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/25 18:50:16 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	whatsign(char *str)
{
	int	a;
	int	sign;

	a = 0;
	sign = 0;
	while (str[a] == ' ' || str[a] == '\t' || str[a] == '\n'
		|| str [a] == '\v' || str[a] == '\f' || str[a] == '\r')
		a ++;
	if (str[a] == 43)
		sign ++;
	else if (47 < str[a] && str[a] <= 57)
		sign ++;
	else if (str[a] == 45)
		sign --;
	else
		sign += 0;
	a ++;
	if (47 < str[a] && str[a] <= 57)
		sign += 0;
	else
		sign = 0;
	return (sign);
}

static int	valuec(char *str)
{
	int	a;
	int	c;

	a = 0;
	c = 1;
	while (str[a] <= 47 || 57 < str[a])
		a ++;
	while (47 < str[a] && str[a] <= 57)
	{
		a ++;
		c *= 10;
	}
	return (c);
}

int	ft_atoi(const char *str)
{
	int	nb;
	int	a;
	int	c;
	int	b;
	int	sign;

	a = 0;
	nb = 0;
	b = 0;
	sign = whatsign(str);
	c = valuec(str);
	while (str[a] <= 47 || 57 < str[a])
		a ++;
	b = a;
	while (47 < str[a] && str[a] <= 57)
		a ++;
	while (b <= a)
	{
		nb += ((str[b] - 48) * (c / 10));
		c /= 10;
		b ++;
	}
	nb *= sign;
	return (nb);
}
/*
int	main(void)
{
	int		i;
	char	*s;

	s = "	 -123y4";
	i = ft_atoi(s);
	printf("%d\n", i);
	printf("%d\n", atoi(s));
}*/
