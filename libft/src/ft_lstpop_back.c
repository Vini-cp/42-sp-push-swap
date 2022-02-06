/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:26:52 by vcordeir          #+#    #+#             */
/*   Updated: 2022/02/06 02:10:01 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_lstpop_back(t_list **lst)
{
	int		content;
	t_list	*tmp;
	t_list	*last_node;

	if ((*lst)->next == NULL)
	{
		content = (*lst)->content;
		*lst = NULL;
	}
	else
	{
		*tmp = *lst;
		while (tmp->next->next != NULL)
			tmp = tmp->next;
		*last_node = tmp->next;
		content = last_node->content;
		tmp->next = NULL;
		free(last_node);
	}
	return (content);
}
