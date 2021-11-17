NAME=libft.a
CC=gcc
CLFAGS=-Wall -Wextra -Werror
CFILES=$(wildcard *.c)

OBJ=$(CFILES:%.c=%.o)

all: $(NAME)


show:
	echo $(OBJ)

$(NAME): $(OBJ)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(CLFILE)
	$(CC) $(CFLASG) -c $(CFILES)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)
