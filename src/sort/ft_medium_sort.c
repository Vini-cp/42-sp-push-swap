/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_medium_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:02:08 by vcordeir          #+#    #+#             */
/*   Updated: 2022/02/10 21:36:18 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static int	ft_get_smallest_number_position(t_list *lst)
{
	int	i;
	int	position;
	int	number;

	i = 0;
	position = 0;
	number = lst->content;
	while (lst)
	{
		if (lst->content < number)
		{
			position = i;
			number = lst->content;
		}
		lst = lst->next;
		i++;
	}
	return (position);
}

static void	ft_empty_b_stack(t_list **a, t_list **b)
{
	while (*b != NULL)
		ft_movements(a, b, "pa");
}

void	ft_medium_sort(t_list **a, t_list **b)
{
	int	position;

	while (ft_lstsize(*a) > 3)
	{
		position = ft_get_smallest_number_position(*a);
		if (position <= ft_lstsize(*a) / 2)
			while (position--)
				ft_movements(a, b, "ra");
		else
			while (position++ < ft_lstsize(*a))
				ft_movements(a, b, "rra");
		ft_movements(a, b, "pb");
	}
	if (!ft_is_sorted(*a))
		ft_small_sort(a, b);
	ft_empty_b_stack(a, b);
}
