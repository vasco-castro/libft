/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 19:52:45 by vsoares-          #+#    #+#             */
/*   Updated: 2024/11/18 21:39:27 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbrsize(long nb)
{
	size_t	count;

	count = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb *= -1;
		count++;
	}
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*number;
	long	nb;
	size_t	nlen;

	nb = n;
	nlen = nbrsize(nb);
	number = ft_calloc(nlen + 1, 1);
	if (!number)
		return (NULL);
	if (nb == 0)
		number[0] = '0';
	if (nb < 0)
	{
		number[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		number[--nlen] = nb % 10 + '0';
		nb /= 10;
	}
	return (number);
}
