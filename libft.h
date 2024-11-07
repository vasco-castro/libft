/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:31:02 by vsoares-          #+#    #+#             */
/*   Updated: 2024/11/07 18:59:41 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>

/* IS FUNCTIONS */
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

/* MEMORY FUNCTIONS */
// bzero
// memcpy
// memmove

// memchr
// memcmp

/* STRING FUNCTIONS */
size_t	ft_strlen(const char *s);
// strlcpy
// strlcat

// strchr
// strrchr
// strncmp

// strnstr

int		ft_toupper(int c);
int		ft_tolower(int c);

// atoi

#endif
