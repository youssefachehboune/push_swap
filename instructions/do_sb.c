/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:20:34 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/09 18:55:32 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../Mandatory/push_swap.h"

int	do_sb(t_list **stack_b, int z)
{
	if (ft_lstsize(*stack_b) >= 2)
	{
		swap(stack_b);
		if (z == 1)
			write(1, "sb\n", 3);
	}
	return (0);
}
