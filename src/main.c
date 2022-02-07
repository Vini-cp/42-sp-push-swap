/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:48:28 by vcordeir          #+#    #+#             */
/*   Updated: 2022/02/07 01:30:48 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	char	**numbers;
	int		size;

	size = argc - 1;
	a = NULL;
	b = NULL;
	numbers = ft_parse_numbers(size, argv);
	if (!size)
		return (0);
	if (!ft_check_numbers(size, numbers))
		return (ft_exit_error(&a, &b, numbers, size));
	a = ft_initiate_stack(size, numbers);
	ft_sort(&a, &b, numbers, size);
	return (0);
}
