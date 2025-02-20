/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:32:18 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/20 15:13:40 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(t_string s, void (*f)(unsigned int, t_string))
{
	size_t	i;

	i = 0;
	while (s && s[i] && f)
	{
		f(i, &s[i]);
		i++;
	}
}
