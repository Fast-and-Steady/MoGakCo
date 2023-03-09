CC			= cc
SRCS_DIR	= ./srcs
SRCS		= $(wildcard $(SRCS_DIR)/*.c)
OBJS		= $(SRCS:.c=.o)
INCLUDE		= includes
LIBC		= ar rcs
TARGET		= libft.a
CFLAGS		= -Wall -Werror -Wextra


all : $(TARGET)

.c.o :
	$(CC) $(CFLAGS) -I $(INCLUDE) -c -o $@ $<

$(TARGET) : $(OBJS)
	$(LIBC) $(TARGET) $(OBJS)
clean :
	rm -r $(OBJS)
.PHONY : clean
