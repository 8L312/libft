/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:00:37 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/25 15:32:09 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && c < n)
	{
		i ++;
		c ++;
	}
	if (c == n)
		i --;
	return (s1[i] - s2[i]);
}

#include <string.h>
int main()
{
	printf("%d\n", ft_strncmp("AAb", "AAr", 5));
	printf("%d\n", strncmp("AAb", "AAr", 5));
}
