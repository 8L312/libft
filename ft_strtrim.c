/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:29:43 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/27 18:13:55 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	chartest(char *s, char *set, int i)
{
	int	trigger;
	int	a;

	trigger = 0;
	a = 0;
	while (set[a] != s[i])
		a ++;
	if (s[i] == set[a])
		trigger = 1;
	return (trigger);
}

int	ft_start(char *s, char *set)
{
	int	trigger;
	int	start;

	start = 0;
	trigger = chartest(s, set, start);
	while (trigger == 1)
	{
		start ++;
		trigger = chartest(s, set, start);
	}
	return (start);
}

int	ft_end(char *s, char *set)
{
	int	trigger;
	int	end;

	end = 0;
	trigger = 0;
	while (s[end] != '\0')
		end ++;
	end --;
	trigger = chartest(s, set, end);
	while (trigger == 1)
	{
		end --;
		trigger = chartest(s, set, end);
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		i;

	i = 0;
	start = ft_start((char *)s1, (char *)set);
	end = ft_end((char *)s1, (char *)set);
	str = malloc(sizeof(char) * (end - start) + 1);
	while (start < end)
	{
		str[i] = s1[start];
		i ++;
		start ++;
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
