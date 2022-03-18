/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 19:56:55 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/10 18:49:47 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Mandatory/push_swap.h"

void	assing_index(t_list **stack_a)
{
	t_list	*temp;
	int		i;

	temp = *stack_a;
	i = 0;
	while (temp)
	{
		temp->current_pos = i++;
		temp = temp->next;
	}
}

void	move_to_top(int pos, t_list **stack_a)
{
	while (pos < 0)
	{
		do_rra(stack_a, 1);
		pos++;
	}
	while (pos > 0)
	{
		do_ra(stack_a, 1);
		pos--;
	}
}

int	get_index(int elm, t_list **stack_a)
{
	t_list	*temp;

	assing_index(stack_a);
	temp = *stack_a;
	while (temp)
	{
		if (temp->content == elm)
		{
			if (temp->current_pos < count_element(stack_a) / 2)
				return (temp->current_pos);
			else
				return (temp->current_pos - count_element(stack_a));
		}
		temp = temp->next;
	}
	return (0);
}

int	count_element(t_list **stack_a)
{
	t_list	*temp;
	int		size;

	if (!stack_a || !*stack_a)
		return (0);
	size = 0;
	temp = *stack_a;
	while (temp)
	{
		size += 1;
		temp = temp->next;
	}
	return (size);
}

void	swap_arr(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}
