/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 15:33:24 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/13 15:17:34 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// Include
# include <stdlib.h>
# include <unistd.h>
# include "../GNL/get_next_line.h"

// Struct

typedef struct s_list
{
	int				content;
	int				index_sorted;
	int				current_pos;
	struct s_list	*next;
}	t_list;

// Linked List

void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstclear(t_list **stack);

// SRC

long	ft_atoi(const char *str);
int		ft_isnumber(char *str);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *s);
int		ft_strcmp(char *s1, char *s2);
char	**ft_split(char	const *s, char c);
// char	*ft_strjoin(char const *s1, char const *s2);

// Instructions

int		do_pa(t_list **stack_b, t_list **stack_a, int z);
int		do_pb(t_list **stack_a, t_list **stack_b, int z);
int		do_rra(t_list **stack_a, int z);
int		do_rrb(t_list **stack_b, int z);
int		do_rrr(t_list **stack_a, t_list **stack_b, int z);
int		do_ra(t_list **stack_a, int z);
int		do_rb(t_list **stack_b, int z);
int		do_rr(t_list **stack_a, t_list **stack_b, int z);
int		do_sa(t_list **stack_a, int z);
int		do_sb(t_list **stack_b, int z);
int		do_ss(t_list **stack_a, t_list **stack_b, int z);

// Action

t_list	*ft_pre_last(t_list **lst);
int		remove_first(t_list **lst);
void	remove_last(t_list **lst);
int		reverse_rotate(t_list **lst);
int		rotate(t_list **lst);
int		swap(t_list **lst);

// Error checkers

int		check_double(int ac, char **av);
int		check_ifnumber(int ac, char **av);
int		check_iflong(int ac, char **av);
int		check_error(int ac, char **av);
int		stack_a_is_sorted(t_list **stack);
int		check_sort(int ac, char **av);
void	print_error(void);

// Algorithme

void	sort_two(t_list **stack);
void	sort_three(t_list **stack);
void	sort_four(t_list **stack_a, t_list **stack_b);
void	sort_five(t_list **stack_a, t_list **stack_b);
void	sort_all(t_list **stack_a, t_list **stack_b, int nb, int index);

//Helpers

int		top_number(t_list **stack);
int		buttom_number(t_list **stack);
int		middle_number(t_list **stack);
void	assing_index(t_list **stack_a);
void	move_to_top(int pos, t_list **stack_a);
int		get_index(int elm, t_list **stack_a);
int		count_element(t_list **stack_a);
void	swap_arr(int *a, int *b);
void	full_it(int *array, t_list **stack_a);
void	sort_array(int *array, int size);
void	assing_sorted_index(t_list **stack_a, int *array);
int		is_empty(t_list **stack);
void	move_to_top_b(int pos, t_list **stack_b);
t_list	**fill_lst(int ac, char **av);

#endif
