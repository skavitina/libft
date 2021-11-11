NAME    =       libft.a


LIST    =       ft_atoi.c\
                ft_bzero.c\
                ft_calloc.c\
                ft_isalnum.c\
                ft_isalpha.c\
                ft_isascii.c\
                ft_isdigit.c\
                ft_isprint.c\
                ft_itoa.c\
                ft_memchr.c\
                ft_memcmp.c\
                ft_memmove.c\
                 ft_memcpy.c\
                ft_memccpy.c\
                ft_memset.c\
                ft_putchar_fd.c\
                ft_putendl_fd.c\
                ft_putnbr_fd.c\
                ft_putstr_fd.c\
                ft_split.c\
                ft_strchr.c\
                ft_strdup.c\
                ft_striteri.c\
                ft_strjoin.c\
                ft_strlcat.c\
                ft_strlcpy.c\
                ft_strlen.c\
                ft_strmapi.c\
                ft_strncmp.c\
                ft_strnstr.c\
                ft_strrchr.c\
                ft_strtrim.c\
                ft_substr.c\
                ft_tolower.c\
                ft_toupper.c\

HEADER  =       libft.h

OBJ     =       $(patsubst %.c,%.o, $(LIST))

RM      =       rm -f
FLAGS   =       -Wall -Wextra -Werror -I$(HEADER)
CC      =       gcc

all:    $(NAME)

$(NAME)	:	$(HEADER) $(OBJ)
					ar rcs $(NAME) $(OBJ)

%.o : %.c $(HEADER)
					$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
fclean:     clean
	$(RM)	$(NAME)

re:	fclean  $(NAME)

.PHONY:     all clean fclean re