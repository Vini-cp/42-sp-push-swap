/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movements.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 22:56:00 by vcordeir          #+#    #+#             */
/*   Updated: 2022/02/06 21:20:35 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	ft_sw(t_list **a, t_list **b, char *mov)
{
	if (mov[1] == 'a' || mov[1] == 's')
		ft_swap(a);
	if (mov[1] == 'b' || mov[1] == 's')
		ft_swap(b);
}

static void	ft_ps(t_list **a, t_list **b, char *mov)
{
	if (mov[1] == 'a')
		ft_push(a, b);
	if (mov[1] == 'b')
		ft_push(b, a);
}

static void	ft_rt(t_list **a, t_list **b, char *mov)
{
	if (mov[1] == 'a' || mov[1] == 'r')
		ft_rotate(a);
	if (mov[1] == 'b' || mov[1] == 'r')
		ft_rotate(b);
}

static void	ft_rr(t_list **a, t_list **b, char *mov)
{
	if (mov[2] == 'a' || mov[2] == 'r')
		ft_reverse_rotate(a);
	if (mov[2] == 'b' || mov[2] == 'r')
		ft_reverse_rotate(b);
}

void	ft_movements(t_list **a, t_list **b, char *mov)
{
	write(1, mov, 3);
	write(1, "\n", 1);
	if (mov[0] == 's')
		ft_sw(a, b, mov);
	else if (mov[0] == 'p')
		ft_ps(a, b, mov);
	else
	{
		if (ft_strlen(mov) == 2)
			ft_rt(a, b, mov);
		else if (ft_strlen(mov) == 3)
			ft_rr(a, b, mov);
	}
}
