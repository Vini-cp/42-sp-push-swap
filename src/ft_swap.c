/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:17:13 by vcordeir          #+#    #+#             */
/*   Updated: 2022/02/06 02:01:27 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(t_list **lst)
{
	int	first_element;
	int	second_element;

	if (ft_lstsize(*lst) > 1)
	{
		first_element = ft_lstpop_front(lst);
		second_element = ft_lstpop_front(lst);
		ft_lstadd_front(lst, ft_lstnew(first_element));
		ft_lstadd_front(lst, ft_lstnew(second_element));
	}
}
