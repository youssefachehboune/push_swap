/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:20:25 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/09 18:55:21 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../Mandatory/push_swap.h"

int	do_rrb(t_list **stack_b, int z)
{
	if (ft_lstsize(*stack_b) >= 2)
	{
		reverse_rotate(stack_b);
		if (z == 1)
			write(1, "rrb\n", 4);
	}
	return (0);
}
