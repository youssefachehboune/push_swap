/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:05:12 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/09 19:38:52 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Mandatory/push_swap.h"

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	if (!s[i])
		return (0);
	while (s[i])
		i++;
	return (i);
}
