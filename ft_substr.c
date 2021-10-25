/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:20:08 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/25 18:26:59 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*sc;
	int		i;

	str = NULL;
	sc = (char *)s;
	i = 0;
	str = malloc(sizeof(char) * (len + 1));
	while (len > 0)
	{
		str[i] = sc[start];
		start ++;
		i ++;
		len --;
	}
	str[i] = '\0';
	return (str);
}
/*
int main()
{
	char *s;

	s = "SICABRON";
	printf("%s\n", ft_substr(s, 2, 6));
	return (0);
}*/
