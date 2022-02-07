/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 01:28:10 by coder             #+#    #+#             */
/*   Updated: 2022/02/07 01:30:00 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_sort(t_list **a, t_list **b, char **numbers, int size)
{
	if (size <= SMALL_THRESHOLD)
		ft_small_sort(a, b);
	else if (size <= MEDIUM_THRESHOLD)
		ft_medium_sort(a, b);
	else
		ft_big_sort(a, b);
	ft_free(a, b, numbers, size);
}
