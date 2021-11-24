/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:34:45 by vcordeir          #+#    #+#             */
/*   Updated: 2021/11/23 21:39:15 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push(t_list **lst_a, t_list **lst_b)
{
	int content;

	if (*lst_b != NULL)
	{
		content = ft_lstpop_front(lst_b);
		ft_lstadd_front(lst_a, ft_lstnew(content));
	}
}
