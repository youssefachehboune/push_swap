/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:53:03 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/13 15:13:00 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./checker.h"

void	instruction(t_list **stack_a, t_list **stack_b, char *str)
{
	if (!ft_strcmp("pa\n", str))
		do_pa(stack_b, stack_a, 0);
	else if (!ft_strcmp("pb\n", str))
		do_pb(stack_a, stack_b, 0);
	else if (!ft_strcmp("ra\n", str))
		do_ra(stack_a, 0);
	else if (!ft_strcmp("rb\n", str))
		do_rb(stack_b, 0);
	else if (!ft_strcmp("rr\n", str))
		do_rr(stack_a, stack_b, 0);
	else if (!ft_strcmp("rra\n", str))
		do_rra(stack_a, 0);
	else if (!ft_strcmp("rrb\n", str))
		do_rrb(stack_b, 0);
	else if (!ft_strcmp("rrr\n", str))
		do_rrr(stack_a, stack_b, 0);
	else if (!ft_strcmp("sa\n", str))
		do_sa(stack_a, 0);
	else if (!ft_strcmp("sb\n", str))
		do_sb(stack_b, 0);
	else if (!ft_strcmp("ss\n", str))
		do_ss(stack_a, stack_b, 0);
	else
		print_error();
}

void	checker(t_list **stack_a, t_list **stack_b)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
		instruction(stack_a, stack_b, str);
		str = get_next_line(0);
	}
	if (stack_a_is_sorted(stack_a) && is_empty(stack_b))
		write (1, "OK\n", 3);
	else
		write (1, "KO\n", 3);
}

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
	t_list	**stack_a;
	t_list	**stack_b;
	char	**splited;
	int		i;

	if (ac < 2)
		return (0);
	splited = join_element(ac, av);
	i = 0;
	while (splited[i])
		i++;
	if (!check_error(i, splited))
		print_error();
	stack_a = fill_lst(i, splited);
	stack_b = malloc(sizeof(t_list *));
	if (!stack_b)
		return (0);
	*stack_b = NULL;
	checker(stack_a, stack_b);
	ft_lstclear(stack_a);
	ft_lstclear(stack_b);
	return (0);
}
