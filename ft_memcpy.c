/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:30:12 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/20 15:24:07 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	t_string	tmp_dst;
	t_string	tmp_src;

	if (!src && !dst)
		return (NULL);
	tmp_dst = (t_string) dst;
	tmp_src = (t_string) src;
	while (n-- > 0)
		*(tmp_dst++) = *(tmp_src++);
	return (dst);
}
