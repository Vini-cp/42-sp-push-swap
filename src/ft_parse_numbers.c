/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 13:02:53 by vcordeir          #+#    #+#             */
/*   Updated: 2021/12/25 15:29:54 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char **ft_parse_numbers(int argc, char *argv[])
{
	char **str;
	int i;

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
