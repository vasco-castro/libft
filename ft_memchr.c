/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:32:00 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/20 15:31:57 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	t_ustring		src;
	unsigned char	chr;

	src = (t_ustring) s;
	chr = (unsigned char) c;
	while (n-- > 0)
	{
		if (*(src) == chr)
			return ((void *) src);
		src++;
	}
	return (NULL);
}
