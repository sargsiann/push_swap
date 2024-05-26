NAME = push_swap

FLAGS = -Wall -Wextra -Werror

CC = cc 

SRCS = $(shell find srcs -name "*.c") push_swap.c

OBJS = $(patsubst %.c, %.o, $(SRCS))

%.c:%.o

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -fsanitize=address -o push_swap

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf push_swap

re : fclean all

.PHONY = all re clean fclean