NAME = libft.a

COMPILER = cc
CFLAGS = -Wall -Wextra -Werror

FUNCTIONS = ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint \
ft_strchr ft_strlen ft_strrchr ft_tolower ft_toupper
SRCS = $(addsuffix .c, $(FUNCTIONS))

OBJS := $(SRCS:%.c=%.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# %.o: %.c
# 	$(COMPILER) $(CFLAGS) -c $< -o $@

all: $(NAME)
	@echo "Building $(NAME)"

clean:
	@rm -f $(OBJS)
	@echo "Cleaned all objects."

fclean: clean
	@rm -f $(NAME)
	@echo "Cleaned all files."

re: fclean all

.DEFAULT_GOAL := all

.PHONY: all bonus clean fclean re