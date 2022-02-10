/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:40:57 by coder             #+#    #+#             */
/*   Updated: 2022/02/10 21:36:04 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	push_to_b(t_list **a, t_list **b, int bit)
{
	int	lst_size;

	lst_size = ft_lstsize(*a);
	while (lst_size)
	{
		if (!((*a)->content & 1 << bit))
			ft_movements(a, b, "pb");
		else
			ft_movements(a, b, "ra");
		lst_size--;
	}
}

static void	push_to_a(t_list **a, t_list **b)
{
	while (*b)
		ft_movements(a, b, "pa");
}

static int	get_max_size(int nbr)
{
	int	max_size;

	max_size = 0;
	while (nbr > 0)
	{
		nbr /= 2;
		max_size++;
	}
	return (max_size);
}

void	ft_radix_sort(t_list **a, t_list **b)
{
	int	max_size;
	int	bit;

	max_size = get_max_size(ft_get_biggest_no(*a));
	bit = 0;
	while (bit < max_size && !ft_is_sorted(*a))
	{
		push_to_b(a, b, bit);
		push_to_a(a, b);
		bit++;
	}
}
