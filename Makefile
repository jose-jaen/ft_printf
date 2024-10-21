NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = libft
UTILS_DIR = utils

INCLUDES = -I $(LIBFT_DIR) -I .

SRC = ft_printf.c \
      $(LIBFT_DIR)/ft_atoi.c $(LIBFT_DIR)/ft_itoa.c $(LIBFT_DIR)/ft_lstsize.c $(LIBFT_DIR)/ft_putnbr.c \
      $(LIBFT_DIR)/ft_strchr.c $(LIBFT_DIR)/ft_strnstr.c $(LIBFT_DIR)/ft_bzero.c $(LIBFT_DIR)/ft_lstadd_back.c \
      $(LIBFT_DIR)/ft_memchr.c $(LIBFT_DIR)/ft_putnbr_fd.c $(LIBFT_DIR)/ft_strdup.c $(LIBFT_DIR)/ft_strrchr.c \
      $(LIBFT_DIR)/ft_calloc.c $(LIBFT_DIR)/ft_lstadd_front.c $(LIBFT_DIR)/ft_memcmp.c $(LIBFT_DIR)/ft_putstr.c \
      $(LIBFT_DIR)/ft_striteri.c $(LIBFT_DIR)/ft_strtrim.c $(LIBFT_DIR)/ft_digit_count.c $(LIBFT_DIR)/ft_lstclear.c \
      $(LIBFT_DIR)/ft_memcpy.c $(LIBFT_DIR)/ft_putstr_fd.c $(LIBFT_DIR)/ft_strjoin.c $(LIBFT_DIR)/ft_substr.c \
      $(LIBFT_DIR)/ft_isalnum.c $(LIBFT_DIR)/ft_lstdelone.c $(LIBFT_DIR)/ft_memmove.c $(LIBFT_DIR)/ft_putulnb_base.c \
      $(LIBFT_DIR)/ft_strlcat.c $(LIBFT_DIR)/ft_tolower.c $(LIBFT_DIR)/ft_isalpha.c $(LIBFT_DIR)/ft_lstiter.c \
      $(LIBFT_DIR)/ft_memset.c $(LIBFT_DIR)/ft_putulnb.c $(LIBFT_DIR)/ft_strlcpy.c $(LIBFT_DIR)/ft_toupper.c \
      $(LIBFT_DIR)/ft_isascii.c $(LIBFT_DIR)/ft_lstlast.c $(LIBFT_DIR)/ft_putchar.c $(LIBFT_DIR)/ft_putunbr_base.c \
      $(LIBFT_DIR)/ft_strlen.c $(LIBFT_DIR)/ft_isdigit.c $(LIBFT_DIR)/ft_lstmap.c $(LIBFT_DIR)/ft_putchar_fd.c \
      $(LIBFT_DIR)/ft_putunbr.c $(LIBFT_DIR)/ft_strmapi.c $(LIBFT_DIR)/ft_isprint.c $(LIBFT_DIR)/ft_lstnew.c \
      $(LIBFT_DIR)/ft_putendl_fd.c $(LIBFT_DIR)/ft_split.c $(LIBFT_DIR)/ft_strncmp.c \
      $(UTILS_DIR)/ft_printf_char.c $(UTILS_DIR)/ft_printf_hex.c $(UTILS_DIR)/ft_printf_int.c \
      $(UTILS_DIR)/ft_printf_pointer.c $(UTILS_DIR)/ft_printf_string.c $(UTILS_DIR)/ft_printf_uint.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

