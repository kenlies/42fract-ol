NAME = fractol
OBJ = $(SRC:.c=.o)
LIB = libft/libft.a
MINILIBX = minilibx_macos
INCLUDE = -I. -I$(MINILIBX)
MLX = -L$(MINILIBX) -lmlx -framework OpenGL -framework AppKit

SRC = fractol.c helper.c hooks.c calc.c

CC = cc
CFLAGS = -Wall -Werror -Wextra -Ofast

COMP = $(CC) $(CFLAGS) $(LIB) $(MLX) $(INCLUDE)

RM = rm -f

all:	$(NAME)

$(NAME):	$(OBJ)
						$(MAKE) -C ./libft
						$(MAKE) -C ./$(MINILIBX)
						$(COMP) $(OBJ) -o $(NAME)

bonus: all

%.o: %.c
		$(CC) $(FLAGS) $(INCLUDE) -c $< -o $@

clean:
		$(RM) $(OBJ)
		$(MAKE) fclean -C ./libft
		$(MAKE) clean -C ./minilibx_macos
		
fclean:	clean
		$(RM) $(NAME)
		$(MAKE) fclean -C ./libft
		$(MAKE) clean -C ./minilibx_macos

re:		fclean all
