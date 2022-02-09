/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_to_stack_a.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:42:24 by coder             #+#    #+#             */
/*   Updated: 2022/02/09 18:24:04 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static int	get_first_biggest_no(t_list *lst, int quantity)
{
	int	i;
	int	position;
	int number;

	i = 0;
	position = 0;
	number = lst->content;
	while (lst && i < quantity)
	{
		if (lst->content > number)
		{
			position = i;
			number = lst->content;
		}
		lst = lst->next;
		i++;
	}
	return (position);
}

void	ft_move_to_stack_a(t_list **a, t_list **b, int quantity)
{
	int	i;
	int	first_biggest;

	first_biggest = get_first_biggest_no(*b, quantity);
	if (first_biggest == 1)
		ft_movements(a, b, "sb");
	else if (first_biggest > 1)
	{
		i = first_biggest;
		while (i--)
			ft_movements(a, b, "rb");
	}
	ft_movements(a, b, "pa");
	if (first_biggest > 1)
	{
		i = first_biggest;
		while (i--)
			ft_movements(a, b, "rrb");
	}
}
