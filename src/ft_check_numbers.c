/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:56:37 by vcordeir          #+#    #+#             */
/*   Updated: 2021/11/23 22:40:49 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int ft_is_integer(int argc, char *argv[])
{
	int i;
	int j;
	int str_len;

	i = 1;
	while (i < argc)
	{
		j = 0;
		str_len = ft_strlen(argv[i]);
		while (j < str_len)
		{
			if (!(j == 0 && argv[i][j] == '-') && !ft_isdigit(argv[i][j]))
				return (FALSE);
			j++;
		}
		if (str_len >= 10 && ft_strncmp(argv[i], "2147483647", 10) > 0)
			return (FALSE);
		if (str_len >= 11 && argv[i][0] == '-')
			if (ft_strncmp(ft_substr(argv[i], 1, str_len), "2147483648", 10) > 0)
				return (FALSE);
		i++;
	}
	return (TRUE);
}

static int ft_is_duplicate(int argc, char *argv[])
{
	int i;
	int j;
	int number;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		number = ft_atoi(argv[i]);
		while (j < argc)
		{
			if (number == ft_atoi(argv[j]))
				return (FALSE);
			j++;
		}
		i++;
	}
	return (TRUE);
}

int ft_check_numbers(int argc, char *argv[])
{
	if (!ft_is_integer(argc, argv))
		return (FALSE);
	if (!ft_is_duplicate(argc, argv))
		return (FALSE);
	return (TRUE);
}
