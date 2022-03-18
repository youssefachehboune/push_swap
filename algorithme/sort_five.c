/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:07:05 by zcherkao          #+#    #+#             */
/*   Updated: 2022/03/09 18:59:49 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Mandatory/push_swap.h"

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	int	min;

	min = buttom_number(stack_a);
	assing_index(stack_a);
	move_to_top(get_index(min, stack_a), stack_a);
	do_pb(stack_a, stack_b, 1);
	sort_four(stack_a, stack_b);
	do_pa(stack_b, stack_a, 1);
}
