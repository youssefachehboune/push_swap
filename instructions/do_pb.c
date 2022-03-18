/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:20:07 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/09 18:55:00 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../Mandatory/push_swap.h"

int	do_pb(t_list **stack_a, t_list **stack_b, int z)
{
	if (ft_lstsize(*stack_a) != 0)
	{
		ft_lstadd_front(stack_b, ft_lstnew((*stack_a)->content));
		remove_first(stack_a);
		if (z == 1)
			write(1, "pb\n", 3);
	}
	return (0);
}
