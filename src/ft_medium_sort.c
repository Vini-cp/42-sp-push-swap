/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_medium_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:02:08 by vcordeir          #+#    #+#             */
/*   Updated: 2021/12/20 21:08:25 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_get_number_position(t_list *lst, int no)
{
	int position;

	position = 0;
	while (lst->next)
	{
		if (lst->content == no)
			return (position);
		lst = lst->next;
		position++;
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
	int smallest_number;
	int	position;
	int i = 10;

	while (ft_lstsize(*a) > 3 && i > 0)
	{
		smallest_number = ft_get_smallest_number(*a);
		position = ft_get_number_position(*a, smallest_number);
		if (position <= ft_lstsize(*a) / 2)
			while (position--)
				ft_movements(a, b, "ra");
		else
			while (position++ < ft_lstsize(*a))
				ft_movements(a, b, "rra");
		ft_movements(a, b, "pb");
		i--;
	}
	ft_small_sort(a, b);
	ft_empty_b_stack(a, b);
}
