/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pre_last.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:08:59 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/09 17:48:04 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Mandatory/push_swap.h"

t_list	*ft_pre_last(t_list **lst)
{
	t_list	*tmp;

	tmp = *lst;
	while (tmp)
	{
		if (!tmp->next->next)
			return (tmp);
		tmp = tmp->next;
	}
	return (tmp);
}
