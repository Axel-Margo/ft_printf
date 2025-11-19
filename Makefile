# Variables 

NAME		= libftprintf.a
CC			= cc
FLAGS		= -Wall -Werror -Wextra
SRC			= print_char.c print_str.c print_nbr.c \
			  print_uns.c print_unstr.c print_hex.c print_upphex.c \
			  print_ptr.c print_longhex.c
FINAL 		= -L. -lft

OBJ 		= $(SRC:.c=.o)

ALL 	: $(NAME)

FINAL	: $(NAME)
			$(CC) $(FINAL) 
$(NAME) : $(OBJ) 
			ar rcs $(NAME) $(OBJ)

%.o 	: %.c 
			$(CC) $(FLAGS) -c $< -o $@
cc		: 
			$(CC) $(FLAGS) -c 
clean:
		$(RM) $(OBJ) $(NAME)

fclean 	: clean
			$(RM) $(NAME)

re		: fclean all

.PHONY: all clean fclean re
