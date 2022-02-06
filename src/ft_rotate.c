/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:40:10 by vcordeir          #+#    #+#             */
/*   Updated: 2022/02/06 02:07:17 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate(t_list **lst)
{
	int	first_element;

	first_element = ft_lstpop_front(lst);
	ft_lstadd_back(lst, ft_lstnew(first_element));
}
