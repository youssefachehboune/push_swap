/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 15:32:56 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/18 15:52:10 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	**fill_lst(int ac, char **av)
{
	t_list	**stack_a;
	int		i;

	stack_a = malloc(sizeof(t_list *));
	if (!stack_a)
		return (NULL);
	*stack_a = NULL;
	i = 0;
	while (i < ac)
	{
		if (ft_memcmp(av[i], "", ft_strlen(av[i])))
			ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(av[i])));
		else if (!ft_memcmp(av[i], "", ft_strlen(av[i])))
			print_error();
		i++;
	}
	return (stack_a);
}

void	sort(int ac, char **av)
{
	t_list	**stack_a;
	t_list	**stack_b;

	stack_a = fill_lst(ac, av);
	stack_b = malloc(sizeof(t_list *));
	if (!stack_b)
		exit (0);
	*stack_b = NULL;
	if (ac == 2)
		sort_two(stack_a);
	if (ac == 3)
		sort_three(stack_a);
	if (ac == 4)
		sort_four(stack_a, stack_b);
	if (ac == 5)
		sort_five(stack_a, stack_b);
	if (ac >= 6 && ac <= 100)
		sort_all(stack_a, stack_b, 5, 1);
	if (ac > 100)
		sort_all(stack_a, stack_b, 10, 1);
	ft_lstclear(stack_a);
	ft_lstclear(stack_b);
}

void	check_arg(char *av)
{
	int	j;

	j = 0;
	while (av[j])
	{
		if (av[j] <= '9' && av[j] >= '0')
			return ;
		j++;
	}
	print_error();
}

char	**join_element(int ac, char **av)
{
	char	*str;
	char	**splited;
	int		i;

	i = 1;
	str = malloc(1);
	if (!str)
		return (0);
	while (i < ac)
	{
		str = ft_strjoin(str, av[i]);
		str = ft_strjoin(str, " ");
		i++;
	}
	splited = ft_split(str, ' ');
	free(str);
	return (splited);
}

int	main(int ac, char **av)
{
	char	**splited;
	int		i;

	i = 0;
	while (av[++i])
		check_arg(av[i]);
	splited = join_element(ac, av);
	i = 0;
	while (splited[i])
		i++;
	if (!check_error(i, splited))
		print_error();
	else
		sort(i, splited);
	free(*splited);
}