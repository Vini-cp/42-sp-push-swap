/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:48:28 by vcordeir          #+#    #+#             */
/*   Updated: 2021/12/19 20:50:20 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
	t_list *a;
	t_list *b;

	if (!ft_check_numbers(argc, argv))
	{
		ft_printf("ERROR\n");
		return (0);
	}
	a = ft_initiate_stack(argc, argv);
	b = ft_lstnew(9);
	// ft_print_lst(a, b);
	if (argc - 1 <= SMALL_THRESHOLD)
		ft_small_sort(&a, &b);
	// ft_print_lst(a, b);
	// else if (argc - 1 < MEDIUM_THRESHOLD)
	// 	ft_medium_sort(a, b);
	// else if (argc - 1 < BIG_THRESHOLD)
	// 	ft_big_sort(a, b);
	// else
	// 	ft_large_sort(a, b);
}
