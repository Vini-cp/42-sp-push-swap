/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 21:43:33 by vcordeir          #+#    #+#             */
/*   Updated: 2021/12/01 22:05:37 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	compare(int a, int b)
{
	if (a > b)
		return (1);
	return (0);
}

static void	get_comparison(int *fst, int *scd, int *trd, t_list *lst)
{
	*fst = compare(lst->content, lst->next->content);
	*scd = compare(lst->next->content, lst->next->next->content);
	*trd = compare(lst->content, lst->next->next->content);
}

void	ft_small_sort(t_list *a, t_list *b)
{
	int	fst_compare;
	int	scd_compare;
	int	trd_compare;

	if (!ft_is_sorted(a))
	{
		get_comparison(&fst_compare, &scd_compare, &trd_compare, a);
		if (fst_compare && !scd_compare && !trd_compare)
			ft_movements(&a, &b, "sa");
		else if (fst_compare && scd_compare && trd_compare)
		{
			ft_movements(&a, &b, "sa");
			ft_movements(&a, &b, "rra");
		}
		else if (fst_compare && !scd_compare && trd_compare)
			ft_movements(&a, &b, "ra");
		else if (!fst_compare && scd_compare && !trd_compare)
		{
			ft_movements(&a, &b, "sa");
			ft_movements(&a, &b, "ra");
		}
		else if (!fst_compare && scd_compare && trd_compare)
			ft_movements(&a, &b, "rra");
	}
}
