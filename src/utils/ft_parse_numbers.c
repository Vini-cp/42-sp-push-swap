/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 13:02:53 by vcordeir          #+#    #+#             */
/*   Updated: 2022/02/06 21:20:39 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

char	**ft_parse_numbers(int argc, char *argv[])
{
	char	**str;
	int		i;

	if (argc > 2)
	{
		i = 1;
		str = malloc((argc - 1) * sizeof(char *));
		while (i < argc)
		{
			str[i - 1] = ft_strdup(argv[i]);
			i++;
		}
	}
	else if (argc == 2)
		str = ft_split(argv[1], SPLIT_CHAR);
	else
		str = NULL;
	return (str);
}
