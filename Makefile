CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_strlen.c ft_substr.c ft_strlcpy.c ft_calloc.c ft_strlcat.c ft_strjoin.c ft_strtrim.c ft_strchr.c ft_split.c ft_itoa.c ft_strmapi.c ft_striterii.c ft_putchar_fd.c
OBJS = $(SRCS:.c=.o)
NAME = program

all: $(NAME)

$(NAME):  $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

