/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:29:43 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/25 18:32:20 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	char			*cs1;
	char			*cset;
	unsigned long	i;

	cs1 = (char *)s1;
	cset = (char *)set;
	i = 0;
	str = malloc(sizeof(char) * ft_strlen(cs1) - (2 * ft_strlen(cset)) + 1);
	while (*cs1 == *cset)
	{
		cs1 ++;
		cset ++;
	}
	while (i <= ft_strlen(cs1 - (2 * ft_strlen(cset))) + 1)
	{
		str[i] = *cs1;
		cs1 ++;
		i ++;
	}
	str[i] = '\0';
	return (str);
}
/*
int main()
{
	char *s1 = "lolkewkewlol";
	char *set = "lol";
	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}*/
