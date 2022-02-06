/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 20:19:23 by vcordeir          #+#    #+#             */
/*   Updated: 2022/02/06 02:10:13 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_lstpop_front(t_list **lst)
{
	t_list	*next_node;
	int		content;

	next_node = (*lst)->next;
	content = (*lst)->content;
	free(*lst);
	*lst = next_node;
	return (content);
}
