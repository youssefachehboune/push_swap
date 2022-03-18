/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_last.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:10:15 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/09 17:48:12 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Mandatory/push_swap.h"

void	remove_last(t_list **lst)
{
	t_list	*pre_last;
	t_list	*last;

	last = ft_lstlast(*lst);
	pre_last = ft_pre_last (lst);
	free(last);
	pre_last->next = NULL;
}
