NAME= pomomodoro
SRCS= srcs/*.c
INCLUDES= includes/*.h
CFLAGS= -Wall -Werror -Wextra

all:
	gcc -o $(NAME) $(CFLAGS) main.c $(SRCS) -I $(INCLUDES)
easy:
	gcc	-o $(NAME) main.c $(SRCS) -I $(INCLUDES)
debug:
	gcc -g $(SRCS) -I $(INCLUDES)
clean:
	rm -rf $(NAME)
re:all clean
