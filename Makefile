NAME = libftprintf.a

SOURCES_MAND = ft_printf.c \
			ft_uint_to_hex_uplow.c \
			ft_ptr_to_hex.c \
			ft_uitostr.c \
			ft_output.c \

OBJS_MAND = $(SOURCES_MAND:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra

AR = ar
LIBFT_DIR = ./libft

CFLAGS += -I $(LIBFT_DIR)

all: $(NAME)

makelibft:
	make -C $(LIBFT_DIR)
	cp $(LIBFT_DIR)/libft.a .
	mv libft.a $(NAME)

$(NAME): makelibft $(OBJS_MAND)
	$(AR) rcs $(NAME) $(OBJS_MAND)

clean:
	rm -f $(OBJS_MAND)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re makelibft