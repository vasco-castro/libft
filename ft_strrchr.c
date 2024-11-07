/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:17:19 by vsoares-          #+#    #+#             */
/*   Updated: 2024/11/07 21:15:57 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			chr;
	unsigned int	i;
	char			*rchr;

    chr = (char) c;
	rchr = NULL;

	while (s[i++])
	{
		if (s[i] == chr)
			rchr = ((char *) &s[i]);
	}
	if (s[i] == chr)
		rchr = ((char *) &s[i]);

	return (rchr);
}
