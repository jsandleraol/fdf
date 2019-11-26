NAME = fdf

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

MLXFLAGS = -framework OpenGL -framework AppKit

SRC_FILES =	./files/main.c\
        ./files/list.c\
        ./files/valid.c\

LIBFT = include/libft/libft.a
MLX = include/minilibx_macos/libmlx.a

LIBFT_DIR = ./include/libft/
MLX_DIR = ./include/minilibx_macos/

all: $(NAME)

$(NAME): lib
	@$(CC) $(CFLAGS) $(SRC_FILES) $(LIBFT) $(MLX) -I include/ $(MLXFLAGS) -o fdf
	@echo "Fdf Generation Complete"

lib:
	@make -C include/libft
	@make -C include/minilibx_macos
clean:
	@make -C $(LIBFT_DIR) clean
	@make -C $(MLX_DIR) clean

fclean: clean
	@rm -f $(NAME)
	@rm -R $(NAME).dSYM
	@rm -f $(LIBFT)
	@make -C $(LIBFT_DIR) fclean
	@make -C $(MLX_DIR) clean

re: fclean all

