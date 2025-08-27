# **************************************************************************** #
#                                                                              #
#                          Makefile para so_long                               #
#                                                                              #
# **************************************************************************** #

NAME	:= so_long
CFLAGS	:= -Wextra -Wall -Werror -Wunreachable-code -Ofast

LIBFT_DIR	:= ./includes/libft
LIBFT_LIB	:= $(LIBFT_DIR)/libft.a

PRINTF_DIR	:= ./includes/printf
PRINTF_LIB	:= $(PRINTF_DIR)/libftprintf.a

LIBMLX_DIR	:= ./includes/MLX42
LIBMLX_BUILD	:= $(LIBMLX_DIR)/build
LIBMLX_LIB	:= $(LIBMLX_BUILD)/libmlx42.a

SRCS	:= $(shell find ./src ./maps ./textures ./includes/libft ./includes/get_next_line -iname "*.c")
OBJS	:= ${SRCS:.c=.o}

HEADERS	:= -I ./includes -I $(LIBFT_DIR) -I $(PRINTF_DIR) -I ./includes/get_next_line -I $(LIBMLX_DIR)/include
LIBS	:= $(LIBFT_LIB) $(PRINTF_LIB) $(LIBMLX_LIB) -ldl -lglfw -pthread -lm

GREEN = \033[0;32m
BLUE = \033[0;34m
NC = \033[0m

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT_LIB) $(PRINTF_LIB) $(LIBMLX_LIB)
	@echo "$(BLUE)Enlazando $@...$(NC)"
	@$(CC) $(OBJS) $(LIBS) $(HEADERS) -o $(NAME)
	@echo "$(GREEN)✅ so_long compilado con éxito!$(NC)"

$(LIBFT_LIB):
	@echo "$(BLUE)Compilando Libft...$(NC)"
	@$(MAKE) -sC $(LIBFT_DIR)

$(PRINTF_LIB):
	@echo "$(BLUE)Compilando ft_printf...$(NC)"
	@$(MAKE) -sC $(PRINTF_DIR)

$(LIBMLX_LIB):
	@echo "$(BLUE)Compilando MLX42...$(NC)"
	@cmake $(LIBMLX_DIR) -B $(LIBMLX_BUILD) && make -C $(LIBMLX_BUILD) -j4

%.o: %.c
	@$(CC) $(CFLAGS) -o $@ -c $< $(HEADERS) && printf "Compilando: $(notdir $<)\r"

clean:
	@rm -rf $(OBJS)
	@rm -rf $(LIBMLX_BUILD)
	@$(MAKE) -sC $(LIBFT_DIR) clean
	@$(MAKE) -sC $(PRINTF_DIR) clean
	@echo "Limpiando archivos objeto y builds."

fclean: clean
	@rm -rf $(NAME)
	@$(MAKE) -sC $(LIBFT_DIR) fclean
	@$(MAKE) -sC $(PRINTF_DIR) fclean
	@echo "Limpiando todo."

re: fclean all

norm:
	@echo "🔍 Verificando norminette en archivos del proyecto..."
	@norminette includes/so_long.h srcs/ maps/ textures/ includes/ft_printf/ includes/get_next_line/ includes/mi_libft/
	@echo "✅ Verificación completada"

.PHONY: all clean fclean re norm