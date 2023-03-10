CC = cc
CFLAGS = ra -Werror
NAME = get_next_line.a 
HEAD = get_next_line.h
SRCS = get_next_line.c get_next_line_utils.c

OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rsc $@ $^

.c.o :
	$(CC) -I $(HEAD) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re :
	$(MAKE) fclean
	$(MAKE) all

.PHONY : all re clean fclean
