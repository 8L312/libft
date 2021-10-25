/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:59:52 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/20 18:01:44 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>

size_t	ft_strlen(char *str)
{
	unsigned long	n;

	n = 0;
	while (str[n] != '\0')
		n ++;
	return (n);
}
/*
int main()
{
	char *str;

	str = "KEWKEW<3";
	printf("%zu\n", ft_strlen(str));
	return(0);
}*/
