/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 21:43:33 by vcordeir          #+#    #+#             */
/*   Updated: 2021/12/19 20:13:13 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	compare(int a, int b)
{
	if (a > b)
		return (1);
	return (0);
}

void	ft_small_sort(t_list **a, t_list **b)
{
	if (!ft_is_sorted(*a))
	{
		if (ft_lstsize(*a) == 2)
			ft_movements(a, b, "sa");
		else
		{
			if (!compare((*a)->content, (*a)->next->content))
			{
				ft_movements(a, b, "rra");
				if (compare((*a)->content, (*a)->next->content))
					ft_movements(a, b, "sa");
			}
			else
			{
				if (!compare((*a)->content, (*a)->next->next->content))
					ft_movements(a, b, "sa");
				else
				{
					ft_movements(a, b, "ra");
					if (compare((*a)->content, (*a)->next->content))
						ft_movements(a, b, "sa");
				}
			}
		}
	}
}
