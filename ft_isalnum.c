/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:36:37 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/20 17:58:08 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(char c)
{
	int	a;

	a = 0;
	if (47 < c && c <= 57)
		a ++;
	else if ((64 < c && c < 90) || (96 < c && c < 123))
		a ++;
	return (a);
}
/*
int main(void)
{
	char c;

	c = '%';
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));
	return (0);
}*/
