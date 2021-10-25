/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:30:19 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/25 18:36:36 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*sc;
	unsigned int	i;
	int				a;

	i = 0;
	a = 0;
	sc = malloc(sizeof(char) * ft_strlen(s) + 1);
	sc = (char *)s;
	while (sc[a] != '\0')
	{
		i = (unsigned int)sc[a];
		sc[a] = (*f)(i, sc[a]);
		a ++;
	}
	return (sc);
}
/*
char	my_func(unsigned int i, char str)
{
	printf("My inner function: index = %d and %c\n", i, str);
	return (str - 32);
}

int main()
{
	char str[11] = "hallojudas";
	printf("Avant : %s\n", str);
	char *result = ft_strmapi(str, &my_func);
	printf("Apres : %s\n", result);
	return 0;
}*/
