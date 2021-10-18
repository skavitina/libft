NAME = libft.a


LIST =  ft_atoi.c		ft_bzero.c		ft_calloc.c\
        ft_isalnum.c	ft_isalpha.c	ft_isascii.c\
        ft_isdigit.c	ft_isprint.c	ft_memchr.c\
        ft_memcmp.c		ft_memmove.c	ft_memset.c\
        ft_strchr.c		ft_strdup.c		ft_strlcat.c\
        ft_strlcpy.c	ft_strlen.c		ft_strncmp.c\
        ft_strnstr.c	ft_tolower.c	ft_toupper.c

HEADER = libft.h

OBJ = $(patsubst %.c,%.o, $(LIST))

RM  =   rm -f
FLAGS = -Wall -Wextra -Werror -I$(HEADER)
CC = gcc

all:    $(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
					ar rcs $(NAME) $?

%.o : %.c $(HEADER)
					$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
fclean:     clean
	$(RM)	$(NAME)

re:	fclean  $(NAME)

.PHONY:     all clean fclean re