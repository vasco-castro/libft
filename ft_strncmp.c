/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:28:13 by vsoares-          #+#    #+#             */
/*   Updated: 2024/11/08 17:03:52 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	r;

	i = 0;
	r = 0;
	while ((s1[i] || s2[i]) && (i < n) && (r == 0))
	{
		r = s1[i] - s2[i];
		i++;
	}
	return (r);
}