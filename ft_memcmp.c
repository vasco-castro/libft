/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:32:48 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/20 15:29:01 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned int	r;
	t_ustring		str1;
	t_ustring		str2;

	str1 = (t_ustring)s1;
	str2 = (t_ustring)s2;
	i = 0;
	r = 0;
	while ((i < n) && (r == 0))
	{
		r = str1[i] - str2[i];
		i++;
	}
	return (r);
}
