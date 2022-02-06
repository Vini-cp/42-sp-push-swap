/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:37:33 by vcordeir          #+#    #+#             */
/*   Updated: 2022/02/06 01:59:27 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	get_first_smallest_no(t_list *lst, int chunk, int no_chunk)
{
	int	position;

	position = 0;
	while (lst->next)
	{
		if (lst->content < chunk * no_chunk)
			return (position);
		lst = lst->next;
		position++;
	}
	return (0);
}

static int	get_last_smallest_no(t_list *lst, int chunk, int no_chunk)
{
	int	position;
	int	i;

	i = 0;
	position = 0;
	while (lst->next)
	{
		if (lst->content < chunk * no_chunk)
			position = i;
		lst = lst->next;
		i++;
	}
	return (position);
}

static int	get_first_biggest_no(t_list *lst)
{
	int	position;
	int	number;
	int	i;

	i = 0;
	position = 0;
	number = lst->content;
	while (lst && i < CHUNCK_NO)
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

static void	move_no_to_stack_b(t_list **a, t_list **b, int size, int chunk)
{
	int	i;
	int	smallest_pos;
	int	biggest_pos;
	int	lst_size;

	smallest_pos = get_first_smallest_no(*a, size, chunk);
	biggest_pos = get_last_smallest_no(*a, size, chunk);
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

static void	move_no_to_stack_a(t_list **a, t_list **b)
{
	int	i;
	int	first_biggest;

	first_biggest = get_first_biggest_no(*b);
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

void	ft_big_sort(t_list **a, t_list **b)
{
	int	chunk_size;
	int	chunks;
	int	i;

	chunk_size = (ft_get_biggest_no(*a) + ft_get_smallest_no(*a)) / CHUNCK_NO + 1;
	chunks = 0;	
	while (*a && chunks < CHUNCK_NO)
	{
		i = 0;
		while (*a && i < chunk_size)
		{
			move_no_to_stack_b(a, b, chunk_size, chunks + 1);
			i++;
		}
		chunks++;
	}
	chunks = CHUNCK_NO - 1;
	while (*b && chunks > 0)
	{
		i = 0;
		while (*b && i < chunk_size)
		{
			move_no_to_stack_a(a, b);
			i++;
		}
		chunks--;
	}
}
