/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:34:45 by vcordeir          #+#    #+#             */
/*   Updated: 2022/02/06 21:19:45 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_push(t_list **lst_a, t_list **lst_b)
{
	int	content;

	if (*lst_b != NULL)
	{
		content = ft_lstpop_front(lst_b);
		ft_lstadd_front(lst_a, ft_lstnew(content));
	}
}
