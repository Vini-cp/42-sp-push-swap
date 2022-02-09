/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_to_stack_b.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:43:37 by coder             #+#    #+#             */
/*   Updated: 2022/02/09 18:24:08 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static int	get_first_smallest_no(t_list *lst, int max_value)
{
	int	position;

	position = 0;
	while (lst->next)
	{
		if (lst->content < max_value)
			return (position);
		lst = lst->next;
		position++;
	}
	return (position);
}

static int	get_last_smallest_no(t_list *lst, int max_value)
{
	int	position;
	int	i;

	i = 0;
	position = 0;
	while (lst->next)
	{
		if (lst->content < max_value)
			position = i;
		lst = lst->next;
		i++;
	}
	return (position);
}

void	ft_move_to_stack_b(t_list **a, t_list **b, int max_value)
{
	int	i;
	int	smallest_pos;
	int	biggest_pos;
	int	lst_size;

	if (!ft_is_sorted(*a))
	{
		smallest_pos = get_first_smallest_no(*a, max_value);
		biggest_pos = get_last_smallest_no(*a, max_value);
		lst_size = ft_lstsize(*a);
		i = 0;
		if (smallest_pos <= (lst_size - biggest_pos - 1))
			while (i++ < smallest_pos)
				ft_movements(a, b, "ra");
		else
			while (i++ < (lst_size - biggest_pos))
				ft_movements(a, b, "rra");
		ft_movements(a, b, "pb");
		if ((*b)->next != NULL && (*b)->content < (*b)->next->content)
			ft_movements(a, b, "sb");
	}
}
