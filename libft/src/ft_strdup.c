/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 13:25:39 by vcordeir          #+#    #+#             */
/*   Updated: 2021/12/25 13:26:06 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*dest;

	len = ft_strlen(s);
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s, (len + 1));
	return (dest);
}
