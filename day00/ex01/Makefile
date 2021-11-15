CC		= clang++
CFLAGS	= -Wall -Wextra -Werror 
NAME	= phonebook
OBJS	= main.o phonebook.o contact.o

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	rm $(NAME) $(OBJS)

fclean: clean
	rm -f $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<