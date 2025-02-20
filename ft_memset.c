/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:01:51 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/20 15:41:59 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	t_ustring	src;
	size_t		i;

	i = 0;
	src = (t_ustring) b;
	c = (unsigned char) c;
	while (i < len)
		src[i++] = c;
	return (b);
}
