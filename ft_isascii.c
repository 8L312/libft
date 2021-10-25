/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 09:35:53 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/20 17:59:54 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int a)
{
	int	i;

	i = 0;
	if (0 <= a && a < 128)
		i ++;
	return (i);
}
/*
int main(void)
{
	int i;

	i = -77;
	printf("%d\n", ft_isascii(i));
	printf("%d\n", isascii(i));
	return(0);
}*/
