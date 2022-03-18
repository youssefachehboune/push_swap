/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:57:53 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/12 19:52:38 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../Mandatory/push_swap.h"

int	check_double(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_memcmp(av[i], "", ft_strlen(av[i])))
			{
				if (ft_atoi(av[i]) == ft_atoi(av[j]))
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
