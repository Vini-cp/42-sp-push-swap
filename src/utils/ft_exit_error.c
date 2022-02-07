/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 23:34:50 by coder             #+#    #+#             */
/*   Updated: 2022/02/07 01:07:25 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	ft_exit_error(t_list **a, t_list **b, char **numbers, int size)
{
	write(1, "ERROR\n", 6);
	ft_free(a, b, numbers, size);
	return (0);
}
