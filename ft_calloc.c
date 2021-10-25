/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:50:44 by rmonney           #+#    #+#             */
/*   Updated: 2021/10/20 18:19:26 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	int		a;

	a = count * size;
	ptr = malloc(count * size);
	return (ptr);
}
/*
int main()
{
	int a;

	a = 3;
	int *i = (int *)ft_calloc(3, sizeof(int));
	char *s = (char *)ft_calloc(3, sizeof(char));
	assert(i != NULL);
	assert(s != NULL);
	while (a > 0)
	{
		printf("%d\n", i[a]);
		a --;
	}
	printf("%s\n", s);
	return (0);
}*/
