CC		= clang++
CFLAGS	= -Wall -Wextra -Werror 
NAME	= phonebook
OBJS	= main.o phonebook.o contact.o

all :	$(NAME)

clean :
	rm $(NAME) $(OBJS)

$(NAME) : $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<