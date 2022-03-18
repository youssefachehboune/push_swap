/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:20:22 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/09 18:55:16 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../Mandatory/push_swap.h"

int	do_rra(t_list **stack_a, int z)
{
	if (ft_lstsize(*stack_a) >= 2)
	{
		reverse_rotate(stack_a);
		if (z == 1)
			write(1, "rra\n", 4);
	}
	return (0);
}
