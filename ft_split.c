/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:42:13 by vsoares-          #+#    #+#             */
/*   Updated: 2024/11/18 23:24:47 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_tokens(char *str, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
		{
			while (str[i] && str[i] != c)
				i++;
			words++;
		}
	}
	return (words);
}

static size_t	tokenlen(const char *str, char c)
{
	size_t	len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}

static void	*destroy(char **tab, size_t len)
{
	while (len)
		free(tab[len--]);
	free(tab[len]);
	free(tab);
	return (NULL);
}

static char	**split(const char *s, char c, char	**tab, size_t words)
{
	size_t	i;
	size_t	j;
	size_t	wlen;

	i = 0;
	j = 0;
	while (i < words)
	{
		while (s[j] && s[j] == c)
			j++;
		wlen = tokenlen(s + j, c);
		tab[i] = ft_substr(s + j, 0, wlen);
		if (!tab[i])
			return (destroy(tab, i));
		j += wlen;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_tokens((char *) s, c);
	tab = malloc((words + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	return (split(s, c, tab, words));
}
