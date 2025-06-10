# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/08 23:23:05 by yzhang2           #+#    #+#              #
#    Updated: 2025/06/10 17:34:48 by yzhang2          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(LIBFT_DIR)
AR = ar
ARFLAGS = rcs          
RM = rm -f

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

TMP_OBJ_DIR := .tmp_ftpf_objs

all: $(NAME)

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)
	
%.o: %.c | $(LIBFT)
	$(CC) $(CFLAGS) -c $< -o $@  

$(NAME): $(LIBFT) $(OBJ)
	@mkdir -p $(TMP_OBJ_DIR)
	@cp $(LIBFT) $(TMP_OBJ_DIR)
	@cd $(TMP_OBJ_DIR) && $(AR) x libft.a 
	@$(AR) $(ARFLAGS) $@ $(OBJ) $(TMP_OBJ_DIR)/*.o
	@rm -rf $(TMP_OBJ_DIR)

clean:
	$(RM) $(OBJ) 
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all re clean fclean