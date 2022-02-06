/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:41:22 by vcordeir          #+#    #+#             */
/*   Updated: 2022/02/06 02:00:55 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_reverse_rotate(t_list **lst)
{
	int	last_element;

	last_element = ft_lstpop_back(lst);
	ft_lstadd_front(lst, ft_lstnew(last_element));
}
