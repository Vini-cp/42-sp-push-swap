/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:51:50 by vcordeir          #+#    #+#             */
/*   Updated: 2021/11/23 19:06:39 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_is_sorted(t_list *lst)
{
	while(lst->next)
	{
		if (lst->content > lst->next->content)
			return (FALSE);
		lst = lst->next;
	}
	return (TRUE);
}
