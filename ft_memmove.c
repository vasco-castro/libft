/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:31:12 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/20 15:24:12 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	t_string	tmp_dst;

	if (!dst && !src)
		return (NULL);
	tmp_dst = (t_string) dst;
	if (dst > src)
	{
		dst += len;
		src += len;
		while (len--)
			*(t_string)--dst = *(t_string)--src;
	}
	else
	{
		while (len--)
			*(t_string)dst++ = *(t_string)src++;
	}
	return (tmp_dst);
}
