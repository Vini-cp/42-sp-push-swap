/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 15:12:01 by vcordeir          #+#    #+#             */
/*   Updated: 2022/02/06 21:20:22 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	ft_free_array(char **str, int str_len)
{
	int	i;

	i = 0;
	while (i < str_len)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	ft_free(t_list **a, t_list **b, char **str, int str_len)
{
	if (*a)
		ft_lstclear(a);
	if (*b)
		ft_lstclear(b);
	ft_free_array(str, str_len);
}
