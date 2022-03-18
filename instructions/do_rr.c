/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:20:19 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/09 18:55:12 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../Mandatory/push_swap.h"

int	do_rr(t_list **stack_a, t_list **stack_b, int z)
{
	if (ft_lstsize(*stack_a) >= 2 && ft_lstsize(*stack_b) >= 2)
	{
		rotate(stack_a);
		rotate(stack_b);
		if (z == 1)
			write(1, "rr\n", 3);
	}
	return (0);
}
