/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:59:16 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/12 19:41:51 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../Mandatory/push_swap.h"

int	check_ifnumber(int ac, char **av)
{
	int	i;

	i = 0;
	while (i < ac)
	{
		if (ft_isnumber(av[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	check_iflong(int ac, char **av)
{
	int	i;

	i = 0;
	while (i < ac)
	{
		if (ft_atoi(av[i]) < (-2147483648) || ft_atoi(av[i]) > (2147483647))
			return (0);
		i++;
	}
	return (1);
}
