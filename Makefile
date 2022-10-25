NAME    = libft
CC = gcc
INC = libft.h
CFLAGS = -Wall -Wextra -Werror
ARFLAGS = -rcs
RM = rm -rf
SRCS    = ft_isalpha.c \
          ft_isdigit.c \
          ft_isalnum.c \
          ft_isascii.c \
          ft_isprint.c \
          ft_strlen.c \
          ft_memset.c \
          ft_bzero.c \
          ft_memcpy.c \
          ft_memmove.c \
          ft_strlcpy.c \
          ft_strlcat.c \
          ft_toupper.c \
          ft_tolower.c \
          ft_strchr.c \
          ft_strrchr.c \
          ft_strncmp.c \
          ft_memchr.c \
          ft_memcmp.c \
          ft_strnstr.c \
          ft_atoi.c \
          ft_calloc.c \
          ft_strdup.c \
          ft_substr.c \
          ft_strjoin.c \
          ft_strtrim.c \
          ft_split.c \
          ft_itoa.c \
          ft_strmapi.c \
          ft_striteri.c \
          ft_putchar_fd.c \
          ft_putstr_fd.c \
          ft_putendl_fd.c \
          ft_putnbr_fd.c
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)
all: $(NAME).a

$(NAME).a: $(OBJS)
	    @ar $(ARFLAGS) $(NAME).a $(OBJS)
		@echo "İşlem tamamlandı"
%.o: %.c $(INC)
	@$(CC) -c $< -o $@ $(CFLAGS)
clean:
	@$(RM) $(OBJS) $(OBJS_BONUS)
fclean: clean
	@$(RM) $(NAME).a
bonus: $(OBJS) $(OBJS_BONUS)
	@ar $(ARFLAGS) $(NAME).a $(OBJS) $(OBJS_BONUS)
re: fclean all
.PHONY: all clean fclean re