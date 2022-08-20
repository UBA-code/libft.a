CC = gcc
FLAGS = -Wall -Wextra -Werror
SRCS = ft*.c
MAIN = main.c
NAME = libft.a

all: libft.a

libft.a:
	$(CC) $(FLAGS) -c $(SRCS)
		ar rcs libft.a *.o
			ranlib libft.a
				mv *.o ft*.c ../
					$(CC) $(FLAGS) $(MAIN) -o prog -L. libft.a

clean:
	rm -f *.o

fclean: clean
	rm -f *.a