/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:18:04 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/20 15:26:00 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	my_strlen(const t_string s)
{
	size_t	len;

	if (!s)
		return (0);
	len = 0;
	while (s[len])
		len++;
	return (len);
}

t_string	ft_strjoin(const t_string s1, const t_string s2)
{
	t_string	str;
	size_t		s1_len;
	size_t		s2_len;

	s1_len = my_strlen(s1);
	s2_len = my_strlen(s2);
	str = ft_calloc(s1_len + s2_len + 1, 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, s1_len);
	ft_memcpy(str + s1_len, s2, s2_len);
	return (str);
}
