CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = pr02_02
OBJS = pr02_02.o subnum.o
SRCS = pr02_02.c subnum.c

%.o : %.c
	$(CC) -c $(CLFAGS) $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CLFAGS) $^ -o $@

clean :
	$(RM) $(OBJS)
