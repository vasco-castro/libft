/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:28:13 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/20 15:08:33 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const t_string s1, const t_string s2, size_t n)
{
	size_t	i;
	size_t	r;

	i = 0;
	r = 0;
	while ((s1[i] || s2[i]) && (i < n) && (r == 0))
	{
		r = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	return (r);
}
