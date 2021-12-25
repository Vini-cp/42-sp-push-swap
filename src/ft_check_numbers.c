/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:56:37 by vcordeir          #+#    #+#             */
/*   Updated: 2021/12/25 16:07:45 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int ft_is_integer(int len, char **str)
{
	int i;
	int j;
	int str_len;

	i = 0;
	while (i < len)
	{
		j = 0;
		str_len = ft_strlen(str[i]);
		while (j < str_len)
		{
			if (!(j == 0 && str[i][j] == '-') && !ft_isdigit(str[i][j]))
				return (FALSE);
			j++;
		}
		if (str_len >= 10 && ft_strncmp(str[i], "2147483647", 10) > 0)
			return (FALSE);
		if (str_len >= 11 && str[i][0] == '-')
			if (ft_strncmp(ft_substr(str[i], 1, str_len), "2147483648", 10) > 0)
				return (FALSE);
		i++;
	}
	return (TRUE);
}

static int ft_is_duplicate(int len, char **str)
{
	int i;
	int j;
	int number;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		number = ft_atoi(str[i]);
		while (j < len)
		{
			if (number == ft_atoi(str[j]))
				return (FALSE);
			j++;
		}
		i++;
	}
	return (TRUE);
}

int ft_check_numbers(int len, char **str)
{
	if (!ft_is_integer(len, str))
		return (FALSE);
	if (!ft_is_duplicate(len, str))
		return (FALSE);
	return (TRUE);
}
