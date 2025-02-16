/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:58:53 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/16 14:33:22 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;

	dest = malloc(ft_strlen(src) + 1);
	if (!dest)
		return (NULL);
	return (ft_memcpy(dest, src, ft_strlen(src) + 1));
}
