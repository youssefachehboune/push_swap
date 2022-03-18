/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:35:28 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/12 19:41:55 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Mandatory/push_swap.h"

void	print_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	check_error(int ac, char **av)
{
	if (!check_ifnumber(ac, av) ||!check_double(ac, av) \
			|| !check_iflong(ac, av))
		return (0);
	if (check_sort(ac, av))
		exit (1);
	return (1);
}
