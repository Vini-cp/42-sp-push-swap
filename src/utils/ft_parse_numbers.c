/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 13:02:53 by vcordeir          #+#    #+#             */
/*   Updated: 2022/02/07 01:19:25 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

char	**ft_parse_numbers(int size, char **argv)
{
	char	**str;
	int		i;

	if (size)
	{
		i = 0;
		str = malloc(size * sizeof(char *));
		while (i < size)
		{
			str[i] = ft_strdup(argv[i + 1]);
			i++;
		}
	}
	else
		str = NULL;
	return (str);
}
