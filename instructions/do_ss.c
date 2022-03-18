/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:20:37 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/09 18:55:37 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../Mandatory/push_swap.h"

int	do_ss(t_list **stack_a, t_list **stack_b, int z)
{
	if (ft_lstsize(*stack_a) >= 2 && ft_lstsize(*stack_b) >= 2)
	{
		swap(stack_a);
		swap(stack_b);
		if (z == 1)
			write(1, "ss\n", 3);
	}
	return (0);
}
