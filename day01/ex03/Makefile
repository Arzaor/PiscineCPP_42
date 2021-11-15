CC		= g++
CFLAGS	= -Wall -Wextra -Werror 
NAME	= weapon
OBJS	= main.o Weapon.o HumanA.o HumanB.o

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	rm $(NAME) $(OBJS)

fclean: clean
	rm -f $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<