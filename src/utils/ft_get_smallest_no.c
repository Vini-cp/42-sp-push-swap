/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_smallest_no.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 18:55:43 by vcordeir          #+#    #+#             */
/*   Updated: 2022/02/06 21:20:27 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	ft_get_smallest_no(t_list *lst)
{
	int	number;

	number = lst->content;
	while (lst->next)
	{
		lst = lst->next;
		if (lst->content < number)
			number = lst->content;
	}
	return (number);
}
