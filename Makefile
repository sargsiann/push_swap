NAME = push_swap

FLAGS = -Wall -Wextra -Werror

CC = cc 

SRCS = $(shell find srcs -name "*.c") push_swap.c

OBJS = $(SRCS:.c=.o)

CHECKER_SRCS = $(shell find srcs -name "*.c") checker_dir/checker.c

CHECKER_OBJS = $(CHECKER_SRCS:.c=.o)

DEPS = $(shell find includes -name "*.h") Makefile

all : $(NAME)

$(NAME) : $(OBJS) $(DEPS)
	$(CC) $(FLAGS) $(OBJS) -fsanitize=address -o push_swap

%.o:%.c
	$(CC) $(FLAGS) -c $< -o $@

bonus : $(CHECKER_OBJS) $(DEPS)
	$(CC) $(FLAGS) $(CHECKER_OBJS) -fsanitize=address -o checker

clean : 
	rm -rf $(OBJS) $(CHECKER_OBJS)

fclean : clean
	rm -rf push_swap
	rm -rf checker

re : fclean all

.PHONY : all re clean fclean