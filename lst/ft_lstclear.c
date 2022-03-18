/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:09:59 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/11 14:29:39 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Mandatory/push_swap.h"

void	ft_lstclear(t_list **stack)
{
	t_list	*fr;

	fr = *stack;
	while (fr)
	{
		*stack = fr->next;
		free(fr);
		fr = *stack;
	}
	free (stack);
}
