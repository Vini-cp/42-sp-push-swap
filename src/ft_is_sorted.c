/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:51:50 by vcordeir          #+#    #+#             */
/*   Updated: 2022/02/06 02:07:03 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_is_sorted(t_list *lst)
{
	while (lst->next)
	{
		if (lst->content > lst->next->content)
			return (FALSE);
		lst = lst->next;
	}
	return (TRUE);
}
