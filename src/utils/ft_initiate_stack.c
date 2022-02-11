/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initiate_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 22:55:47 by vcordeir          #+#    #+#             */
/*   Updated: 2022/02/11 02:34:35 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stdio.h>

static int	*create_positif_list(int len, int *int_lst)
{
	int	*pos_lst;
	int	i;
	int	j;
	int	sum;

	pos_lst = malloc(len * sizeof(int));
	i = 0;
	while (i < len)
	{
		j = 0;
		sum = 0;
		while (j < len)
		{
			if (j != i)
			{
				if (int_lst[i] > int_lst[j])
					sum++;
			}
			j++;
		}
		pos_lst[i] = sum;
		i++;
	}
	free(int_lst);
	return (pos_lst);
}

static int	*create_integer_list(int len, char **str)
{
	int	*int_lst;
	int	i;

	int_lst = malloc(len * sizeof(int));
	i = 0;
	while (i < len)
	{
		int_lst[i] = ft_atoi(str[i]);
		i++;
	}
	return (int_lst);
}

t_list	*ft_initiate_stack(int len, char **str)
{
	int		i;
	int		*int_lst;
	t_list	*lst;

	i = 0;
	int_lst = create_integer_list(len, str);
	int_lst = create_positif_list(len, int_lst);
	lst = NULL;
	while (i < len)
	{
		ft_lstadd_back(&lst, ft_lstnew(int_lst[i]));
		i++;
	}
	free(int_lst);
	return (lst);
}
