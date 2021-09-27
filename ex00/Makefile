CC		= clang++
CFLAGS	= -Wall -Wextra -Werror
NAME	= megaphone
OBJS	= megaphone.o

all :	$(NAME)

clean :
	rm $(NAME) $(OBJS)

$(NAME) : $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<