/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:42:13 by vsoares-          #+#    #+#             */
/*   Updated: 2024/11/14 23:02:28 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countwords(char *str, char c)
{
	size_t	i;
	size_t	words;

	while (str)
	{
		while (str[i] != c)
			i++;
		words++;
	}
	return (words);
}

static size_t	wordlen(char *str, char c)
{
	size_t	len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	size_t	words;
	size_t	wlen;

	words = countwords(s, c);
	wlen = 0;
	tab = malloc(words * (wlen + 1) * sizeof(char *));
	return (tab);
}
