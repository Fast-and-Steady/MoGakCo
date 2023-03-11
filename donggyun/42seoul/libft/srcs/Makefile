CC = cc
CFLAG = -Wall -Wextra -Werror
NAME = libft.a
HEAD = libft.h
SRC = ft_isalpha.c ft_toupper.c ft_isdigit.c ft_tolower.c ft_isalnum.c\
ft_strchr.c ft_isascii.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c\
ft_strnstr.c ft_atoi.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c\
ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_calloc.c ft_strdup.c\
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c\
ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRC_BO = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJ = $(SRC:.c=.o)
OBJ_BO = $(SRC_BO:.c=.o)

ifdef BONUS
	OBJ_CUR = $(OBJ_BO)
else
	OBJ_CUR = $(OBJ)
endif

all : $(NAME)
	sleep 1
$(NAME) : $(OBJ_CUR)
	ar -rsc $@ $^

.c.o :
	$(CC) $(CFLAG) -I $(HEAD) -c $< -o $@

clean : 
	rm -rf *.o all bonus

fclean : clean
	rm -rf $(NAME)

re :
	$(MAKE) fclean
	$(MAKE) all

bonus :
	make BONUS=1 $(NAME)

.PHONY : all re clean fclean bonus
