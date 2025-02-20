/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:31:02 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/20 15:44:01 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <stdint.h>

typedef char*			t_string;
typedef unsigned char*	t_ustring;

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/* CHECK FUNCTIONS */
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);

/* STRING FUNCTIONS */
size_t		ft_strlen(const t_string s);
size_t		ft_strlcpy(t_string dst, const t_string src, size_t dstsize);
size_t		ft_strlcat(t_string dst, const t_string src, size_t dstsize);
int			ft_strncmp(const t_string s1, const t_string s2, size_t n);

int			ft_toupper(int c);
int			ft_tolower(int c);

t_string	ft_strchr(const t_string s, int c);
t_string	ft_strrchr(const t_string s, int c);
t_string	ft_strnstr(const t_string haystack, const t_string needle,
				size_t len);
t_string	ft_strdup(const t_string s1);
t_string	ft_substr(const t_string s, unsigned int start, size_t len);
t_string	ft_strjoin(const t_string s1, const t_string s2);
t_string	ft_strtrim(const char *s1, const t_string set);
t_string	*ft_split(const t_string s, char c);

t_string	ft_strmapi(const t_string s, char (*f)(unsigned int, char));
void		ft_striteri(t_string s, void (*f)(unsigned int, t_string));

void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(t_string s, int fd);
void		ft_putendl_fd(t_string s, int fd);
void		ft_putnbr_fd(int n, int fd);

int			ft_atoi(const t_string str);
t_string	ft_itoa(int n);

/* MEMORY FUNCTIONS */
void		ft_bzero(void *s, size_t n);
void		*ft_memset(void *b, int c, size_t len);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_calloc(size_t count, size_t size);

/* LINKED-LISTS FUNCTIONS */

t_list		*ft_lstnew(void *content);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);

void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstadd_back(t_list **lst, t_list *new);

void		ft_lstdelone(t_list *lst, void (*del)(void*));
void		ft_lstclear(t_list **lst, void (*del)(void*));

void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
