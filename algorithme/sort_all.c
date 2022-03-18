/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:11:48 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/14 18:35:35 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../Mandatory/push_swap.h"

void	chunks(t_list **stack_a, t_list **stack_b, int size, int *array)
{
	t_list	*temp;
	int		temp_size;

	temp_size = size;
	assing_index(stack_a);
	assing_sorted_index(stack_a, array);
	while (temp_size--)
	{
		temp = *stack_a;
		while (temp)
		{
			if (temp->index_sorted < size)
				break ;
			temp = temp->next;
		}
		if (temp)
		{
			move_to_top(get_index(temp->content, stack_a), stack_a);
			do_pb(stack_a, stack_b, 1);
			if (temp->index_sorted < size / 2)
				do_rb(stack_b, 1);
		}
	}	
}

void	sort_all(t_list **stack_a, t_list **stack_b, int nb, int index)
{
	int	*array;
	int	size;
	int	*temp;

	size = count_element(stack_a) / nb;
	array = malloc(sizeof(int) * count_element(stack_a));
	if (!array)
		return ;
	full_it(array, stack_a);
	sort_array(array, count_element(stack_a));
	assing_sorted_index(stack_a, array);
	temp = array;
	while (index++ < nb + 1 && !stack_a_is_sorted(stack_a))
	{
		chunks(stack_a, stack_b, size, array);
		array = array + size;
	}
	while (!is_empty(stack_a))
		do_pb(stack_a, stack_b, 1);
	while (!is_empty(stack_b))
	{
		move_to_top_b(get_index(top_number(stack_b), stack_b), stack_b);
		do_pa(stack_b, stack_a, 1);
	}
	free(temp);
}
