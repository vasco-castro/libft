NAME = libft.a

COMPILER = cc
CFLAGS = -Wall -Wextra -Werror

FUNCTIONS = ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint \
ft_strchr ft_strlen ft_strrchr ft_tolower ft_toupper ft_strncmp ft_strnstr \
ft_atoi ft_strlcpy ft_strlcat \
ft_memset ft_bzero ft_memcpy ft_memmove ft_memchr ft_memcmp ft_calloc \
ft_strdup ft_substr ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi ft_striteri \
ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd \

SRCS = $(addsuffix .c, $(FUNCTIONS))

OBJS := $(SRCS:%.c=%.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# %.o: %.c
# 	$(COMPILER) $(CFLAGS) -c $< -o $@

all: $(NAME)
	@echo "Building $(NAME)"

# TODO: REMOVE THIS TEST RULE & check the rest
t: $(NAME)
	@echo Running main test file.
	@$(COMPILER) $(CFLAGS) main.c $(NAME) -o test
	@./test

clean:
	@rm -f $(OBJS)
	@echo "Cleaned all objects."

fclean: clean
	@rm -f $(NAME)
	@rm -f test
	@echo "Cleaned all files."

re: fclean all

.DEFAULT_GOAL := all

.PHONY: all bonus clean fclean re