/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:52:19 by vsoares-          #+#    #+#             */
/*   Updated: 2024/11/07 19:07:45 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_islower(int c)
{
	return (c >= 97 && c <= 122);
}

static int	ft_isupper(int c)
{
	return (c >= 65 && c <= 90);
}

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - (97 - 65));
	return (c);
}
