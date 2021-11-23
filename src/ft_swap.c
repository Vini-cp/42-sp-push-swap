/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:17:13 by vcordeir          #+#    #+#             */
/*   Updated: 2021/11/23 19:24:17 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(t_list **lst)
{
	int first_element;
	int second_element;

	first_element = ft_lstpop_front(lst);
	second_element = ft_lstpop_front(lst);
	ft_lstadd_front(lst, ft_lstnew(first_element));
	ft_lstadd_front(lst, ft_lstnew(second_element));
}
