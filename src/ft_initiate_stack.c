/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initiate_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 22:55:47 by vcordeir          #+#    #+#             */
/*   Updated: 2021/11/21 22:55:48 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list *ft_initiate_stack(int argc, char *argv[])
{
	int i;
	t_list *lst;

	i = 1;
	lst = (t_list *)malloc(sizeof(t_list));
	lst = NULL;
	while (i < argc)
	{
		ft_lstadd_back(&lst, ft_lstnew(ft_atoi(argv[i])));
		i++;
	}
	return (lst);
}