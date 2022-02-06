/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initiate_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 22:55:47 by vcordeir          #+#    #+#             */
/*   Updated: 2022/02/06 02:01:20 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_initiate_stack(int len, char **str)
{
	int		i;
	t_list	*lst;

	i = 0;
	lst = NULL;
	while (i < len)
	{
		ft_lstadd_back(&lst, ft_lstnew(ft_atoi(str[i])));
		i++;
	}
	return (lst);
}
