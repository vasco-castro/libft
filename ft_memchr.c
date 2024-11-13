/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:32:00 by vsoares-          #+#    #+#             */
/*   Updated: 2024/11/13 20:55:33 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	chr;

	src = (unsigned char *) s;
	chr = (unsigned char) c;
	if (!s || n == 0)
		return (NULL);
	while (n-- > 0)
	{
		if (*(src) == chr)
			return ((void *) src);
		src++;
	}
	return (NULL);
}
