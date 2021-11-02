/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:20:08 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/27 14:22:36 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*sc;
	int		i;

	if (!s)
		return (NULL);
	sc = (char *)s;
	i = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		str[i] = '\0';
		return (str);
	}
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

	s = "JUDAS";
	printf("%s\n", ft_substr(s, 8, 5));
	return (0);
}*/
