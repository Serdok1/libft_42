/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbayra <sozbayra@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:33:24 by sozbayra          #+#    #+#             */
/*   Updated: 2022/11/28 17:04:18 by sozbayra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*s2;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		i++;
	}
	s2 = (char *)malloc(i + 1);
	if (!s2)
		return (0);
	i = 0;
	while (s[i])
	{
		s2[i] = (*f)(i, s[i]);
		i++;
	}
	s2[i] = 0;
	return (s2);
}
