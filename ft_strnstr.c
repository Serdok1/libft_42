/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbayra <sozbayra@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:54:12 by sozbayra          #+#    #+#             */
/*   Updated: 2022/10/27 17:39:19 by sozbayra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char	*big, const char *little, size_t len)
{
    size_t	i;
	size_t	j;

	i = ft_strlen(little);
	if (i == 0)
		return ((char *)big);
	i = 0;
	while (big[i])
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (little[j] && little[j] == big[i + j] && i + j < len)
				j++;
			if (little[j] == 0)
				return ((char *)big + i);
		}
		if (++i == len)
			return (0);
	}
	return (0);
}
