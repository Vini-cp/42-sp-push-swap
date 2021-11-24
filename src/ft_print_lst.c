/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 22:55:56 by vcordeir          #+#    #+#             */
/*   Updated: 2021/11/23 19:53:29 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_print_lst(t_list *lst_a, t_list *lst_b)
{
	int size_a;
	int size_b;

	size_a = ft_lstsize(lst_a);
	size_b = ft_lstsize(lst_b);
	while(size_a)
	{
		ft_printf("%d ", lst_a->content);
		lst_a = lst_a->next;
		if (size_b == size_a)
		{
			ft_printf("%d", lst_b->content);
			lst_b = lst_b->next;
			size_b--;
		}
		size_a--;
		ft_printf("\n");
	}
	ft_printf("- -\na b\n");
	ft_printf("--------------------------------------------------------------\n");
}
