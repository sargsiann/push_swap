NAME = push_swap

CFLAGS = -Wall -Wextra -Werror

CC = cc 

SRCS = $(shell find srcs -name "*.c")

OBJS = $(patsubst %.c, %.o, $(SRCS))

%.o:%.c -I libft
	cc $(FLAGS) -c $< -o $@ 

LIB_MAKE = $(MAKE) -C libft $(MAKE) -C libft bonus

LIB_PATH = libft/libft.a

all : $(NAME)

$(NAME) : $(OBJS)
	$(LIB_MAKE)
	$(CC) $(FLAGS) $(OBJS) $(LIB_PATH) -o $(NAME)

clean : $(OBJS)
	$(MAKE) -C libft clean
	rm -rf $(OBJS)

flclean : clean
	rm -rf $(LIB_PATH)
	rm -rf $(NAME)

re : fclean all

.PHONY = all re clean fclean