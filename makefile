files = *.c libft.h
gcc = gcc -Wall -Wextra -Werror

all : comp
	./a.out
comp : 
	$(gcc) $(files)

