/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:28:30 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/21 14:45:55 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &*s);
		i ++;
	}
}
/*
void	fct(unsigned int i, char *s)
{
	s[i] -= 32;
}

int	main()
{
	char str[5] = "judas";

	ft_striteri(str, &fct);
	printf("%s\n", str);
	return (0);
}*/