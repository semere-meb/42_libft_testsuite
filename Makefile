CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = *.c
NAME = test

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) -L.  -o $@ $^ -lft

fclean:
	@rm -f $(NAME)

re: fclean all

.PHONY: all fclean re
