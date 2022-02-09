/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:37:33 by vcordeir          #+#    #+#             */
/*   Updated: 2022/02/09 18:28:37 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	repopulate_a_stack(t_list **a, t_list **b, int chunck_size, int no_chunks)
{
	int	i;
	int size;

	i = 0;
	while (*b && i < no_chunks)
	{
		if (ft_lstsize(*b) / chunck_size == 0)
			size = chunck_size;
		else
			size = ft_lstsize(*b) % chunck_size;
		ft_move_to_stack_a(a, b, size);
		i++;
	}
}

static void	populate_b_stack(t_list **a, t_list **b, int chunck_size, int no_chunks)
{
	int i;
	int j;
	int delta_value;
	int smallest_value;

	i = 0;
	smallest_value = ft_get_smallest_no(*a);
	delta_value = (ft_get_biggest_no(*a) - smallest_value) / (no_chunks - 1);
	while (*a && i < no_chunks)
	{
		while (*a && j < chunck_size)
		{
			ft_move_to_stack_b(a, b, (smallest_value + delta_value * (i + 1)));
			j++;
		}
		i++;
	}
}

static int	calculate_chunck_size(t_list *a)
{
	int	lst_size;

	lst_size = ft_lstsize(a);
	if (lst_size <= 100)
		return (lst_size / 5);
	return (lst_size / 11);
}

void	ft_big_sort(t_list **a, t_list **b)
{
	int	chunck_size;
	int	no_chunks;

	chunck_size = calculate_chunck_size(*a);
	if (ft_lstsize(*a) / chunck_size == 0)
		no_chunks = ft_lstsize(*a) / chunck_size;
	else
		no_chunks = ft_lstsize(*a) / chunck_size + 1;
	populate_b_stack(a, b, chunck_size, no_chunks);
	repopulate_a_stack(a, b, chunck_size, no_chunks);
}
