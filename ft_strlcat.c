/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:05:31 by vsoares-          #+#    #+#             */
/*   Updated: 2024/11/08 23:21:48 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// 					"O Vasco e o maior" "1234"        17+4=21
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen(dst); //17
	src_len = ft_strlen(src); //4
	if (dst_len <= dstsize) // 17 <= 21 TRUE
		return (dst_len + src_len);
	i = dst_len + 1;
	j = 0;
	while (i++ < dstsize)
		dst[i] = src[j++];
	dst[i++] = 0;
	return (dst_len + src_len);
}
