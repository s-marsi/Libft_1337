CFLAGS = -Wall -Wextra -Werror

AR = ar -r

NAME = libft.a

FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c	ft_isascii.c \
		ft_toupper.c ft_tolower.c ft_isprint.c ft_strchr.c ft_strrchr.c \
		ft_strlen.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c \
		ft_memset.c ft_bzero.c  ft_memchr.c ft_memcpy.c ft_memmove.c \
 		ft_memcmp.c ft_calloc.c ft_strdup.c ft_atoi.c ft_substr.c	\
		ft_strjoin.c ft_strtrim.c ft_itoa.c	ft_split.c ft_strmapi.c	\
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c	\

BONUS_FILES = ft_lstnew_bonus.c	\
			ft_lstadd_front_bonus.c	\
			ft_lstsize_bonus.c	\
			ft_lstlast_bonus.c	\
			ft_lstadd_back_bonus.c	\
			ft_lstdelone_bonus.c	\
			ft_lstclear_bonus.c	\
			ft_lstiter_bonus.c	\
			ft_lstmap_bonus.c

FILES_O = $(FILES:.c=.o)

BONUS_O = $(BONUS_FILES:.c=.o) $(FILES_O)



all : $(NAME)

bonus:   $(BONUS_O)
	$(AR) $(NAME) $(BONUS_O)
	touch bonus

$(NAME) : $(FILES_O) 
	$(AR) $(NAME) $(FILES_O)



clean :
	rm -f $(BONUS_O)

fclean : clean
	rm -f $(NAME) bonus

re : fclean all