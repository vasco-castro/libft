NAME = libft.a

COMPILER = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_strchr.c ft_strlen.c \
ft_strrchr.c ft_tolower.c ft_toupper.c

OBJS := $(SRCS:%.c=%.o)

$(NAME): $(OBJS)
	$(COMPILER) $(CFLAGS) $^ -o $@

%.o: %.c
	$(COMPILER) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.DEFAULT_GOAL := all

.PHONY: all bonus clean fclean re