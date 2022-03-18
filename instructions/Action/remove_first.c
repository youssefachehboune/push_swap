/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_first.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:12:10 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/09 17:48:07 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Mandatory/push_swap.h"

int	remove_first(t_list **lst)
{
	t_list	*temp;

	if (!*lst)
		return (0);
	temp = *lst;
	*lst = temp -> next;
	free (temp);
	return (1);
}
