/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:20:11 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/09 18:55:05 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../Mandatory/push_swap.h"

int	do_ra(t_list **stack_a, int z)
{
	if (ft_lstsize(*stack_a) >= 2)
	{
		rotate(stack_a);
		if (z == 1)
			write(1, "ra\n", 3);
	}
	return (0);
}
