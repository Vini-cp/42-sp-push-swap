/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:48:28 by vcordeir          #+#    #+#             */
/*   Updated: 2021/12/25 12:21:53 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
	t_list *a;
	t_list *b;

	if (!ft_check_numbers(argc, argv))
	{
		write(1, "ERROR\n", 6);
		return (0);
	}
	a = ft_initiate_stack(argc, argv);
	b = NULL;
	if (argc - 1 <= SMALL_THRESHOLD)
		ft_small_sort(&a, &b);
	else if (argc - 1 < MEDIUM_THRESHOLD)
		ft_medium_sort(&a, &b);
	else
		ft_big_sort(&a, &b);
	if (a)
		ft_lstclear(&a);
	if (b)
		ft_lstclear(&b);
}
