/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_smallest_no.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 18:55:43 by vcordeir          #+#    #+#             */
/*   Updated: 2021/12/22 18:00:35 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_get_smallest_no(t_list *lst)
{
	int number;
	
	number = lst->content;
	while (lst->next)
	{
		lst = lst->next;
		if (lst->content < number)
			number = lst->content;
	}
	return (number);
}
