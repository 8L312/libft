/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:20:19 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/25 15:08:32 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	word_counter(char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i ++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * (finish - start + 1));
	while (start < finish)
	{
		word[i] = str[start];
		i ++;
		start ++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	unsigned long	i;
	unsigned long	j;
	int				index;
	char			**split;

	split = malloc((sizeof(char *) * word_counter((char *)s, c) + 1));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen((char *)s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen((char *)s)) && index >= 0)
		{
			split[j++] = word_dup((char *)s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = NULL;
	free(split);
	return (split);
}
/*
#include "ft_strlen.c"
int	main(void)
{
	char	**sp;
	int		i;

	sp = ft_split("8888judas88lol8kewkew8", '8');
	i = 0;
	while (sp[i] != NULL)
	{
		printf("%s\n", sp[i]);
		i ++;
	}
	return (0);
}*/
