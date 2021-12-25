/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 15:12:01 by vcordeir          #+#    #+#             */
/*   Updated: 2021/12/25 16:14:01 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_free_array(char **str, int str_len)
{
	int i;

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
