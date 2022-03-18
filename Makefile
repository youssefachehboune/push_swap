# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/04 15:32:29 by yachehbo          #+#    #+#              #
#    Updated: 2022/03/13 17:50:16 by yachehbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_BONUS = checker

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRCS = Mandatory/push_swap.c GNL/get_next_line_utils.c lst/ft_lstadd_back.c lst/ft_lstclear.c  \
lst/ft_lstsize.c lst/ft_lstadd_front.c lst/ft_lstlast.c lst/ft_lstnew.c \
instructions/do_pa.c  instructions/do_pb.c  instructions/do_ra.c  instructions/do_rb.c \
instructions/do_rr.c  instructions/do_rra.c instructions/do_rrb.c instructions/do_rrr.c \
instructions/do_sa.c  instructions/do_sb.c  instructions/do_ss.c instructions/Action/ft_pre_last.c\
instructions/Action/remove_first.c instructions/Action/remove_last.c \
instructions/Action/reverse_rotate.c instructions/Action/rotate.c \
instructions/Action/swap.c src/ft_atoi.c src/ft_split.c src/ft_isnumber.c src/ft_memcmp.c src/ft_strcmp.c src/ft_strlen.c \
error_checkers/check_double.c  error_checkers/check_integer.c error_checkers/check_sort.c \
error_checkers/check_error.c algorithme/sort_two.c algorithme/sort_three.c algorithme/sort_four.c \
algorithme/sort_five.c algorithme/sort_all.c algorithme/helpers.c algorithme/helpers2.c

SRC_BNS = GNL/get_next_line.c GNL/get_next_line_utils.c Bonus/checker.c \
lst/ft_lstadd_back.c lst/ft_lstclear.c \
lst/ft_lstsize.c lst/ft_lstadd_front.c lst/ft_lstlast.c lst/ft_lstnew.c \
instructions/do_pa.c  instructions/do_pb.c  instructions/do_ra.c  instructions/do_rb.c \
instructions/do_rr.c  instructions/do_rra.c instructions/do_rrb.c instructions/do_rrr.c \
instructions/do_sa.c  instructions/do_sb.c  instructions/do_ss.c instructions/Action/ft_pre_last.c\
instructions/Action/remove_first.c instructions/Action/remove_last.c \
instructions/Action/reverse_rotate.c instructions/Action/rotate.c \
instructions/Action/swap.c src/ft_atoi.c src/ft_split.c src/ft_strcmp.c src/ft_isnumber.c src/ft_memcmp.c src/ft_strlen.c \
error_checkers/check_double.c  error_checkers/check_integer.c error_checkers/check_sort.c \
error_checkers/check_error.c algorithme/sort_two.c algorithme/sort_three.c algorithme/sort_four.c \
algorithme/sort_five.c algorithme/sort_all.c algorithme/helpers.c algorithme/helpers2.c

OBJS = $(SRCS:.c=.o)
OBJ_BNS = $(SRC_BNS:.c=.o)

all: $(NAME)

$(NAME): Mandatory/push_swap.h $(OBJS)
	cc $(CFLAGS) -o $(NAME) $(OBJS)

bonus: Bonus/checker.h $(OBJ_BNS)
	cc $(CFLAGS) -o $(NAME_BONUS) $(OBJ_BNS)

%.o: %.c
	cc -c $< -o $@
	
clean:
	$(RM) $(OBJS) $(OBJ_BNS)

fclean: clean
	$(RM) $(NAME) $(NAME_BONUS)

re : fclean all

.PHONY: all clean fclean bonus re
