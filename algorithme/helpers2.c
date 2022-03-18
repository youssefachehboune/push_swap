/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 19:42:35 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/09 19:00:35 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Mandatory/push_swap.h"

void	full_it(int *array, t_list **stack_a)
{
	t_list	*temp;

	temp = *stack_a;
	while (temp)
	{
		*array = temp->content;
		temp = temp->next;
		array++;
	}
}

void	sort_array(int *array, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (array[i] > array[j])
				swap_arr(&array[i], &array[j]);
			j++;
		}
		i++;
	}
}

void	assing_sorted_index(t_list **stack_a, int *array)
{
	t_list	*temp;
	int		i;
	int		j;

	j = 0;
	temp = *stack_a;
	while (temp)
	{
		i = 0;
		while (temp->content != array[i])
			i++;
		temp->index_sorted = i;
		i = 0;
		temp = temp->next;
	}
}

int	is_empty(t_list **stack)
{
	if (!*stack)
		return (1);
	return (0);
}

void	move_to_top_b(int pos, t_list **stack_b)
{
	while (pos < 0)
	{
		do_rrb(stack_b, 1);
		pos++;
	}
	while (pos > 0)
	{
		do_rb(stack_b, 1);
		pos--;
	}
}
