/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_biggest_no.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:54:40 by vcordeir          #+#    #+#             */
/*   Updated: 2022/02/06 21:20:24 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	ft_get_biggest_no(t_list *lst)
{
	int	number;

	number = lst->content;
	while (lst->next)
	{
		lst = lst->next;
		if (lst->content > number)
			number = lst->content;
	}
	return (number);
}
