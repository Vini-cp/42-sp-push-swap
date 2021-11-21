/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 20:19:23 by vcordeir          #+#    #+#             */
/*   Updated: 2021/11/21 20:46:28 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstdelone(t_list *lst)
{
	t_list	*next_node;

	next_node = NULL;
	if (lst != NULL)
	{
		next_node = lst->next;
		free(lst);
		lst = next_node;
	}
}
