/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:48:28 by vcordeir          #+#    #+#             */
/*   Updated: 2021/12/25 16:14:24 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
	t_list *a;
	t_list *b;
	char	**numbers;
	int		numbers_len;

	numbers = ft_parse_numbers(argc, argv);
	numbers_len = ft_arraylen(numbers);
	a = NULL;
	b = NULL;
	if (!ft_check_numbers(numbers_len, numbers))
	{
		write(1, "ERROR\n", 6);
		ft_free(&a, &b, numbers, numbers_len);
		return (0);
	}
	a = ft_initiate_stack(numbers_len, numbers);
	if (numbers_len <= SMALL_THRESHOLD)
		ft_small_sort(&a, &b);
	else if (numbers_len <= MEDIUM_THRESHOLD)
		ft_medium_sort(&a, &b);
	else
		ft_big_sort(&a, &b);
	ft_free(&a, &b, numbers, numbers_len);
}
