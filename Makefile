NAME = push_swap

CFLAGS = -Wall -Werror -Wextra

CC = cc 

SRCS = $(shell find srcs -name "*.c") push_swap.c

OBJS = $(patsubst %.c, %.o, $(SRCS))

CHECKER_SRCS = $(shell find checker_dir srcs -name "*.c")

CHECKER_OBJS = $(patsubst %.c, %.o, $(CHECKER_SRCS))

%.o:%.c -I libft
	cc $(FLAGS) -c $< -o $@ 

%.o:%.c -I libft
	cc $(FLAGS) -c $< -o $@

LIB_MAKE = $(MAKE) -C libft

LIB_PATH = libft/libft.a

all : $(NAME)

checker : $(CHECKER_OBJS)
	$(LIB_MAKE) 
	$(CC) $(FLAGS) -fsanitize=address $(CHECKER_OBJS) $(LIB_PATH) -o checker

$(NAME) : $(OBJS)
	$(LIB_MAKE)
	$(CC) $(FLAGS) -fsanitize=address $(OBJS) $(LIB_PATH) -o $(NAME)

clean : $(OBJS)
	$(MAKE) -C libft clean
	rm -rf $(OBJS)
	rm -rf $(CHECKER_OBJS)

fclean : clean
	rm -rf $(LIB_PATH)
	rm -rf $(NAME)
	rm -rf checker

re : fclean all
	
.PHONY = $(NAME) all re clean fclean checker