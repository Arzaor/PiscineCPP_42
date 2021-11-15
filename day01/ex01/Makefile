CC		= g++
CFLAGS	= -Wall -Wextra -Werror 
NAME	= zombie
OBJS	= main.o Zombie.o ZombieHorde.o

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	rm $(NAME) $(OBJS)

fclean: clean
	rm -f $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<