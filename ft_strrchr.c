/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:17:19 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/20 15:39:29 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_string	ft_strrchr(const t_string s, int c)
{
	unsigned int	i;
	char			chr;
	char			*rchr;

	i = 0;
	chr = (char) c;
	rchr = NULL;
	while (s[i])
	{
		if (s[i] == chr)
			rchr = ((t_string) & s[i]);
		i++;
	}
	if (s[i] == chr)
		rchr = ((t_string) & s[i]);
	return (rchr);
}
